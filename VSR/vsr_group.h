//
//  vsr_group.h
//  Versor
//

//  2D and 3D Point Groups
//  Created by Pablo Colapinto on 3/7/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#ifndef Versor_vsr_group_h
#define Versor_vsr_group_h

/*
 *  
 *  
 *
    1) A Space Group is a Point Group + a Lattice Frame.
    
    2) In GA we use the point group to generate the lattice itself, rather
    than attaching the point group to the lattice:
 
	[see this paper: "The Crystallographic Space Groups in Geometric Algebra" 
	by David Hestenes and Jeremy Holt (journal of Mathematical Physics, January 2007]
 	
	3) Thus Point Groups and Space Groups are uniquely defined by their generating versors 
    2D groups require a,b
    3D groups require a,b,c
    
    4) The BAR over the p or q determines whether the transformation is made up of even or odd
    number of generatrors (bar = even)
	
	5) Numbers p and q in Crystallographic tables are exponentials of rotations and reflections
	and specify how many times to apply the rotation or reflection (i.e. 'p' times or 'q' times)
	Used in particular to specify the THETA of the ROTOR since THETA = 180/p  (or THETA = 180/q)
	
	6) Each space group symbol designates 
		lattice type [bravais type, see below)
		point group (ps and qs specify angle between generating versors)
		joining constraints (glide reflections or glide rotations (screws) )
	
	7) Types of 3D Bravais lattices for the Space Groups:
	
        primitive (P),
        body-centered (I), 
        single-face centered (A, B or C), 
        face-centered (F), 
        rhombohedral (R), 
        hexagonal (H).
	
	8) Symmorphic space groups don't have joining constraints, so reflection and rotation is independent of translation
	otherwise, in non-symmorphic space groups, you have "glide-reflections" and "glide-rotations" (aka screws)

    Glides ("g") are translators * reflections etc.
	In 3D there are three types of glide: 
        axial glides
        diagonal glides
        diamond glides,
	
	
	when bars are present, and rotors are even, the angle between a,b, is 180/p and btwn b, c is 180/q.  the angle between c and a
	is always 90 (Pi/2) so we don't worry about it...
	
	In the classical literature "m" signifies use of the pin group (aka reflections) in the generating algebra of the Space Group (and the Pin Group
	are normals to planes of reflection)  In the versor model of GA, it means you are using a collection of odd 
	versors p or q times.

	Basically:
	1 - need something to represent the versors themselves ( a bunch of dual planes ) (vers2, vers3, etc below)
	2 - need something to represent how they are multiplied: a*b,c, a, bc a,b,c, abc, etc
	3 - need something to represent how many times each group can be applied (exp)
	
	in the conformal model, versors can be represented by circles and spheres, allowing for hyperbolic groups

	Group Theory lingo:
	G = < a,b,c | abc = e > 

 *  Created by x on 1/30/10.
 *  Copyright 2010 x. All rights reserved.
 *
 */

#ifndef GROUP_H_INCLUDED
#define GROUP_H_INCLUDED

#include "vsr.h"
#include "vsr_op.h"
#include "vsr_frame.h"

#include <iostream>
#include <vector>

namespace vsr {



	using std::vector;
	                
    //don't be alarmed, "versor" here is typedefed
    typedef Versor Dlp;    

    //A Point Group (base class for 2D or 3D groups)
	class PointGroup  {
	
        protected:
		
		//The "Frame" is composed of 2 or 3 versors (could be dual planes ... or also circles or spheres for hyperbolic extension)
		Versor mVersor[3];  

        //Symmetric Ratios
        int mP, int mQ;

		//bools of bars
		bool mBar[3];	

		//Iterations of Generators
		int mExp[3];  

        //Generators made From the Frame (reflectors, glide reflectors, etc) to make a Fundamental REGION
        int mNumGen;
        int mNumExp;
        int mNumFrame;
        
		
		//International Identifier
		string mName;
		
		public:
		
			PointGroup() {} 
		
			string  name() const		{ return mName; }
			int numFrame() const		{ return mNumFrame; }
			int numGen()   const		{ return mNumGen;   }

			Versor&	versor(int i) const { return mVersor[i]; }
			Versor  versor(int i)		{ return mVersor[i]; }

			int		exp(int i) const	{ return mExp[i];   }
			bool	bar(int i) const	{ return mBar[i];   }
            
            int p() const { return mP; }
            int& p() { return mP; }
            int q() const { return mQ; }
            int& q() { return mQ; }
			
			double theta(int i) const { return PI * (180.0 / i ) / 180.0; }
			
			void setFrame(Versor a, Versor b, Versor c = Dlp(0,0,0) ) { 
                
				mVersor[0] = a;
				mVersor[1] = b;
				mVersor[2] = c;
			
			}

            //Primitive Translation Generators
            Trs trs(int i) { return Gen::trs( mVersor[i]); }

			friend ostream& operator << (ostream&, const Group&);
	};
    
    
    
	
	inline ostream& operator << (ostream& os, const Group& g){
		os << g.name() << " Group:  #Frames: " << g.numFrame() << " #Gens: " << g.numGen() << "\n";
		for (int i = 0; i < g.numFrame(); ++i){
			os << "Frame " << i << ": " << g.frame(i) << "\n";
		}
		for (int i = 0; i < g.numGen(); ++ i){
			os << "Exp: " << g.exp(i) << " Bar: " << g.bar(i) << "\n" << "Gen: " << g.gen(i);
		 } 		
		os << endl;
		return os;
	}




	class PointGroup2D : public PointGroup {
    
	
		public:

			//2d point groups -> pass in number of exponents and boolean spin or pin type (bar = spin)		
			PointGroup2D (int p, bool bar, string name = "unnamed");
			
            Versor pin(int i) { return versor(i); }
            Motor spin() { return versor(0) * versor(1); }
            
            //apply transformations to incoming motif
            template<typename A>
            vector<A> operator()( const A& a ) {
                
                vector<A> res;
                
                //Are we a bar (rotation) group or an m (mirror) group ?
                if (mBar[0]){
                    Mot m = spin();
                   for (int i = 0; i < p; ++i){
                        res.push_back( a.sp(m) );
                        m = m.sp(m);
                    }
                } else {
                    //reflect over fundamental plane
                    for (int i = 0; i < p; ++i){
                        
                    }
                }
            }
            
			//10 2D Point Groups
			static PointGroup2D Oblique_1();
			static PointGroup2D Oblique_2();

			static PointGroup2D Rectangular_m();
			static PointGroup2D Rectangular_mm();

			static PointGroup2D Trigonal_3m();
			static PointGroup2D Trigonal_3();

			static PointGroup2D Square_4m();
			static PointGroup2D Square_4();

			static PointGroup2D Hexagonal_6m();
			static PointGroup2D Hexagonal_6();
	
	};
	
	class PointGroup3D : public Group {
		
        //3 Dual Planes
        mVersor mA, mB, mC;
        
		public:
		
			PointGroup3D (int p, int q, bool pbar, bool qbar, bool bbar = 0);			
			
			void setGen(){
            
				//just p?
				if (mBar[2]) {
					mGen[0] = new State ( *mFrame[0] * (*mFrame[1]) * (*mFrame[2]) );
					
					return;
				}
				
				if (mExp[1] == 0){
					
					if (mBar[0]) { 
						mGen[0] = new State (*mFrame[0] * (*mFrame[1]));
					}
					else { 
						mGen[0] = new State(*mFrame[0]); 
						if (mExp[0] > 1) {
							mGen[1] = new State(*mFrame[1]); 
						}
					}
					return;
				}
			  
				if(mBar[0]) {
					if( mBar[1]) {										
						mGen[0] = new State( *mFrame[0] * (*mFrame[1]) );
						mGen[1] = new State( *mFrame[1] * (*mFrame[2]) );
					} else {
						mGen[0] = new State( *mFrame[0] * (*mFrame[1]) );
						mGen[1] = new State( *mFrame[2] );
					}
				} else { 
					if( mBar[1]) {										
						mGen[0] = new State( *mFrame[0] );
						mGen[1] = new State( *mFrame[1] * (*mFrame[2]));
					} else {
						mGen[0] = new State( *mFrame[0] );
						mGen[1] = new State( *mFrame[1] );
						mGen[2] = new State( *mFrame[2] );
					}
				} 
			}

			
			//32 3d point groups
			static PointGroup3D Triclinic_1();
			static PointGroup3D Triclinic_1bar();

			static PointGroup3D Monoclinic_2();
			static PointGroup3D Monoclinic_m();
			static PointGroup3D Monoclinic_2m();

			static PointGroup3D Orthorhombic_222();
			static PointGroup3D Orthorhombic_mm2();
			static PointGroup3D Orthorhombic_mmm();

			static PointGroup3D Tetragonal_4();
			static PointGroup3D Tetragonal_4bar();
			static PointGroup3D Tetragonal_4m();
			static PointGroup3D Tetragonal_422();
			static PointGroup3D Tetragonal_4mm();
			static PointGroup3D Tetragonal_42m();
			static PointGroup3D Tetragonal_4mmm();

			static PointGroup3D Trigonal_3();
			static PointGroup3D Trigonal_3bar();
			static PointGroup3D Trigonal_32();
			static PointGroup3D Trigonal_3m();	
			static PointGroup3D Trigonal_3barm();
							
			static PointGroup3D Hexagonal_6();
			static PointGroup3D Hexagonal_6bar();
			static PointGroup3D Hexagonal_6m();
			static PointGroup3D Hexagonal_6222();
			static PointGroup3D Hexagonal_6mm();
			static PointGroup3D Hexagonal_6m2();
			static PointGroup3D Hexagonal_6mmm();

			static PointGroup3D Cubic_23();
			static PointGroup3D Cubic_m3();
			static PointGroup3D Cubic_432();
			static PointGroup3D Cubic_43m();
			static PointGroup3D Cubic_m3m();
			
	
	};

//	class SpaceGroup : public Group {
//		
//		//2D space groups
//		static Vers2 Oblique();
//		static Vers2 Rectangular();
//		static Vers2 Square();
//		static Vers2 Trigonal2D();
//		static Vers2 Hexagonal2D();
//		
//
//		//3D space groups
//		static Vers3 Triclinic();
//		
//		static Vers3 Monoclinic();
//		
//		static Vers3 Orthorhombic();
//		
//		static Vers3 Tetragonal();
//		
//		static Vers3 Trigonal3D();
//		static Vers3 Hexagonal3D();
//		
//		static Vers3 Cubic();
//		static Vers3 Isometric();
//
//	};

} //vsr::

#endif

#endif

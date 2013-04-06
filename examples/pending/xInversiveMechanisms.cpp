//
//  Inversions.cpp
//  Versor
//
//  Created by Pablo Colapinto on 12/3/12.
//  Copyright (c) 2012 WOLFTYPE. All rights reserved.
//

#include "vsr.h"
#include "vsr_GLVInterfaceImpl.h"

#include "vsr_field.h"
#include "vsr_mesh.h"

#include <iostream>
#include "vsr_tests.h"

using namespace vsr;

//kink
void kink(GLVApp& app){

    vector<Cir> vc;
    vector<Dls> vd;
    
    static Pnt p = PT(0,0,0);
    DRAWANDTOUCH(p);
    
    static Dll dll = DLN(0,1,0);
    
    static double radius, iter, length, nb;
    static bool bDrawSpheres,bDrawOriginSphere,bDrawCircles;
    
    SET app.gui(radius, "radius")(iter, "iter")(length, "length",0,10)(nb,"numbraids",0,100)(bDrawOriginSphere,"drawOriginSphere")(bDrawSpheres,"drawSpheres"); END
    
    int numbraids = nb;
    
    vector<Mesh> m(numbraids, GL::LS);
    
    static Cir c = CXZ(1).trs(1,1,0);

    DRAWANDTOUCH3(c,1,1,1);
    
    Dls dls = Ro::dls(p,radius*5);
    vd.push_back(dls);        
    
    Cir nc = c.re(dls);
    DRAW3(nc,0,0,1);
    
    ITJ(i,iter*1000)
        double t= 1.0 * i/(iter*1000);
        Dls td = dls.trs( Biv(dll).dual() * t * length);
        Cir tc = c.re(td);
        vc.push_back(tc); vd.push_back(td);
        
        ITJ(j,numbraids)
            double theta = PI * j/numbraids;
            m[j].add( Ro::pnt_cir(tc,theta) );
        END
    END
    
    ITJ(i,numbraids)
        double t = 1.0 * i/numbraids;
        DRAW3( Ro::pnt_cir(c, PI * t), t,0,1-t);
        DRAW3( Ro::pnt_cir(nc, PI * t), t,0, 1-t);
        m[i].draw(0,1,0);
    END
    
    if (bDrawOriginSphere) DRAW4(dls,1,1,1,.3);
    ITJ(i,vd.size())
        if (bDrawSpheres) DRAW4(vd[i],1,1,1,.1);
        if (bDrawCircles) DRAW4(vc[i],1,1,1,.1);
    END
}





void intussuception(GLVApp& app){


    static double amt;
    static bool bLine, bShow;
    SET app.gui(amt,"amt",-100,100)(bLine, "line")(bShow,"show ref"); END
    
    static Frame frame( PT(-1,0,0) );
    TOUCH(frame);
    DRAW(frame.lz());
    
    static Field<Pnt> f(1,19,10,.5);
    
    int iter = 10;
    
    UVMesh mesh(f.h(), f.d());
    
    IT2( f.h(), f.d() )
        
        double t = sin(3*PI*u);//-1.0 + 2*u;
        
        int idx = f.idx(1,i,j);
        Pnt& p = f.at(1,i,j);      
         p = Ro::dls_pnt( f.grid(idx), amt * t);
        
        Dls td = frame.bound().re( p );
        Cir tp = Cir(frame.lz()).re( p );
        if (bShow) bLine? DRAW(tp) : DRAW(td);
        
        Pnt np =  bLine ? Ro::loc(tp) : (td/td[3]).null();
        mesh.add(np);
        DRAW3( np,0,1,1);
    END2
    
    mesh.draw(.3,.3,.3);
    
    //Sphere
    DRAW4(frame.bound(), 1,0,0,.5);
}

//distance based
void intussuception2(GLVApp& app){

    //CONTROL POINT
    static Frame frame( PT(0,0,0) );
    
    TOUCH(frame); DRAW(frame.lz());
    
    //SURFACE MESH
    static Field<Pnt> f(1,19,10,.5);

    //Amt, and Gui Draw Booleans
    static double amt, curve;
    static bool bWt, bLine, bShow;
    
    SET 
        app.gui(bWt,"wt")(amt,"amt",-100,100)(curve,"curve",-10,10)(bLine, "line")(bShow,"show ref"); 
        frame.scale(.2);
        bLine = true;
    END
    
    
    int iter = 10;
    UVMesh mesh(f.h(), f.d());

    Bst bst = Gen::bst( frame.txScaled() * curve );
    Cir tc = Cir(frame.lz()).sp( bst );
    DRAW(tc);
    
    ITJ( i, f.num() )
        
        
        double dist2Line = ( f.grid(i) <=  tc.dual() ).dot()[0];
        double dist = Ro::sqd( frame.pos(), f.grid(i) );
        
        Pnt& p = f[i]; 
        
        p = Ro::dls_pnt( f.grid( i ), amt * ( !bWt ? 1.0 : 2.0 / ( 1.0 + ( bLine ? dist2Line : dist ) ) ) );
        
        //Reflect Control into Surface
        Dls td = frame.bound().re( p );
        Cir tp = tc.re( p );
        
        Pnt np =  bLine ? Ro::loc(tp) : Ro::loc(td);//bLine ? Ro::loc(tp) : (td/td[3]).null();
        
        mesh.add(np);
        DRAW3( np,0,1,1);
        if (bShow) bLine? DRAW(tp) : DRAW(td);
    
    END
    
    mesh.draw(.3,.3,.3);
    
    //Sphere
    DRAW4(frame.bound(), 1,0,0,.5);
}


void bend(GLVApp& app){
    //CONTROL POINT
    static Frame frame( PT(0,0,0) );
    
    TOUCH(frame); DRAW(frame.lz());
    
    //SURFACE MESH
    static Field<Pnt> f(1,19,10,.5);

    //Amt, and Gui Draw Booleans
    static double amt, xCurve,yCurve;
    static bool bWt, bLine, bShow;
    
    SET 
        app.gui(bWt,"wt")(amt,"amt",-100,100)(xCurve,"xCurve",-100,100)(yCurve,"yCurve",-100,100)(bLine, "line")(bShow,"show ref"); 
        frame.scale(.2);
        bLine = true;
        bWt = true;
    END
    
    
    int iter = 10;
    
    UVMesh mesh(f.h(), f.d());
    
    Par xPar = frame.txScaled() * xCurve;
    Par yPar = frame.txScaled() * yCurve;
    
    Bst xBst = Gen::bst( xPar );
    Bst yBst = Gen::bst( yPar );

    Cir tx = Cir(frame.lz()).sp( xBst );
    Cir ty = Cir(frame.ly()).sp( yBst );
    
    DRAW(tx);
    DRAW(ty);
    
    ITJ( i, f.num() )
        
        
        double dist2XLine = ( f.grid(i) <=  ( bWt ? tx.dual() : Par( frame.dlz() ) ) ).dot()[0];
        double dist2YLine = ( f.grid(i) <=  ( bWt ? ty.dual() : Par( frame.dly() ) ) ).dot()[0];
        
        Pnt& p = f[i]; 
        
        Par tpar = xPar * 1.0 / ( 1.0 + dist2XLine )  + yPar * 1.0 / (1.0 + dist2YLine );                
        Pnt np =  Ro::loc( p.sp( Gen::bst( tpar * amt ) ) );
        
        mesh.add(np);
        DRAW3( np,0,1,1);
            
    END
    
    mesh.draw(.3,.3,.3);
    
    //Sphere
    DRAW4(frame.bound(), 1,0,0,.5);

}


void GLVApp :: onDraw() {
    intussuception2(*this);
//    bend(*this);
}

int main(int argc, const char * argv[]) {
     
    File::setdir( argv[0] );       

    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
    		
	Window * win = new Window(1000,500,"Inversions",&glv);
    GLVApp * app = new GLVApp(win);    
    app->gui.colors().back.set(0,0,0);
	glv.colors().back.set(.2,.2,.2);
    
    glv << app;
        
    Application::run();

    return 0;
}

//void tunnel(GLVApp& app){
//
//    static Par par = PAIR(1,0,0);    
//    DRAWANDTOUCH(par);
//    Cir c = par.dual();
//    DRAW( c );
//    
//    ITJ(m,100)
//        double t = 1. * m/100;
//        ITJ(i,10)
//            Pnt p = PT( -1.0 + 2.0*i/10, 1.0, 0);
//            Pnt p2 = PT( -1.0 + 2.0*i/10, -1.0, 0);
//            DRAW(p);  DRAW(p2);
//            Pnt np = p.re( c.trs(t,0,0) );
//            Pnt np2 = p2.re( c.trs(t,0,0) );
//            DRAW3(np,1,0,0);
//            DRAW3(p.re(c.dual()),0,1,0);
//            DRAW3(np2,1,0,1);
//            DRAW3(p2.re(c.dual()),0,1,1);
//        END
//    END
//}
//
//
//
//void handle(GLVApp& app){
//
//    static Cir c = CXZ(.5);
//    TOUCH(c);
//
//    vector<Pnt> pnt;
//    int iter = 100;
//    double w = 3.0;
//    
//    static double rad;
//    SET app.gui(rad,"rad",-100,100); END
//    
//    ITJ(i,iter)
//        double t= -1.0 + 2.0* i/iter;
//        Dls dls = Ro::dls( PT(0,w *t, 0 ), rad);                                                                                                                                                                                                   
//        pnt.push_back( dls );
//    END
//    
//    ITJ(i,iter)
//        Cir tc = c.re(pnt[i]);
//        DRAW4(pnt[i],1,0,0,.1);
//        DRAW3(tc,0,1,0);
//    END
//
//}
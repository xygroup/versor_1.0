/*
 *  vsr_file.h
 *  CONGA_07
 *
 *  Created by x on 8/29/10.
 *  Copyright 2010 x. All rights reserved.
 *
 */

#ifndef VSR_FILE_INCLUDED
#define VSR_FILE_INCLUDED

#include <iostream>
#include <string>

namespace vsr {

using namespace std;

#define STRINGIFY(A) #A

class File {
 private:
 public:
  static string cwd;
  static string data;
  static string shaders;
  static string meshes;
  static string resources;
  static string textures;
  static string images;
  static string videos;
  static string audio;
  static string output;
  static void setdir(string s);
};
}  // namespace vsr

#endif
#pragma once
/*H***********************************************************
 * FILENAME :        .hpp
 *
 * DESCRIPTION :
 *       
 *
 * PUBLIC FUNCTIONS :
 *       
 *
 * AUTHOR     :    Brigham Keys, Esq
 * START DATE :    07/23/2015
 *
 *H*/

#ifdef __MINGW32__
#include <windows.h>
#endif

#ifdef WIN32
#include <windows.h>
#endif

#include <vector>
#include <GL/freeglut.h>
#include <GL/glu.h>
#include <GL/gl.h>
#include "Ball.hpp"
#include "Club.hpp"
#include "Ground.hpp"
#include "Platform.hpp"

class Course {

 public:
  Course();
  bool update(std::vector <bool> controls);
  void draw(std::vector <bool> controls);

 private:
  Ball *ball;
  Club *club;
  Ground *ground;
};

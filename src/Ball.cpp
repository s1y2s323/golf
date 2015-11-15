#include "Ball.hpp"
/*F***********************************************************
 * 
 * 
 * PURPOSE : 
 *
 * RETURN :  
 *
 * NOTES :   
 *F*/

/*F***********************************************************
 * hit(float force)
 * 
 * PURPOSE : 
 *
 * RETURN :  
 *
 * NOTES :   
 *F*/
void Ball::hit(float force, float clubR) {

  z -= (force);
}

/*F***********************************************************
 * update(Dir d)
 * 
 * PURPOSE : Updates the location of the tile
 *
 * RETURN :  void
 *
 * NOTES :   
 *           
 *           
 *F*/
void Ball::update(std::vector <bool> controls) {

  //A
  if(controls[3]) {
    ballR += 10;
  }

  //D
  if(controls[4]) {
    ballR -= 10;
  }
}

/*F***********************************************************
 * draw(void)
 * 
 * PURPOSE : Generic draw function
 *
 * RETURN :  void
 *
 * NOTES :   
 *F*/
void Ball::draw(void) {
  glPushMatrix();
  glTranslatef(10, 0, 0);
  glPushMatrix();
  glColor3ub(255, 255, 255);
  glRotatef(ballR, 0, 0, 1);
  glTranslatef((x), (z + .7), (y + 1.2));
  glutSolidSphere(1, 20, 20);
  glPopMatrix();
  glPopMatrix();
}

/*F***********************************************************
 * DEFAULT CONSTRUCTOR
 * 
 * NOTES :   
 *F*/
Ball::Ball() {
  xv = 0;
  yv = 0;
  zv = 0;
  ballR = 0;
}

/*F***********************************************************
 * DEFAULT CONSTRUCTOR
 * 
 * NOTES :   
 *F*/
Ball::Ball(float xl, float yl, float zl, float r) {
  x = xl;
  y = yl;
  z = zl;
  ballR = r;
}

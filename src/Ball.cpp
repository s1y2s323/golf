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
 * regulateVelocity()
 * 
 * PURPOSE : makes sure we are not moving too fast in any
 *           given direction
 *
 * RETURN :  void
 *
 * NOTES :   function name is rather verbos
 *F*/
inline void regulateVelocity(float &vel) {
  if(vel > .2) {
    vel = .2;
  }
}

/*F***********************************************************
 * update(Dir d)
 * 
 * PURPOSE : Updates the location of the tile
 *
 * RETURN :  void
 *
 * NOTES :   default values are not used when the player won
 *           the game.
 *           
 *F*/
void Ball::update(float x0, float y0, float z0) {

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
  glTranslatef((x), (z + 2), (y + 2));
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
}

/*F***********************************************************
 * DEFAULT CONSTRUCTOR
 * 
 * NOTES :   
 *F*/
Ball::Ball(float xl, float yl, float zl) {
  x = xl;
  y = yl;
  z = zl;
}

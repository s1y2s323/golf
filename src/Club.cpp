#include "Club.hpp"

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
 * 
 * 
 * PURPOSE : 
 *
 * RETURN :  
 *
 * NOTES :   
 *F*/
void Ship::animate(std::vector <bool> controls) {

  //spacebar
  if(controls[0]) {
    clubR = 0;
  }

  //W
  if(controls[2]) {
    clubR += 2;
  }

  //S
  if(controls[1]) {
    clubR -= 2;
  }

  if(clubR > 0) {
    clubR = 0;
  }

  if(clubR < -30) {
    clubR = -30;
  }
}

/*F***********************************************************
 * DEFAULT CONSTRUCTOR
 * 
 * NOTES :   
 *F*/
Ship::Ship() {
  x = 10;
  y = 5;
  z = 0;
  clubR = 0;
}

/*F***********************************************************
 * draw(void)
 * 
 * PURPOSE : draws the ship onto the screen
 *
 * RETURN :  void
 *
 * NOTES :   Looks pretty awesome to me
 *F*/
void Ship::draw(std::vector <bool> controls) {

  angle += 5;
  glPushMatrix();
  glTranslatef(x, z + (clubR / 10), (y - 4.2));
  glRotatef(clubR, 1, 0, 0);
  glPushMatrix();
  glColor3ub(96, 96, 96);
  glScalef(2, .5, .5);
  glTranslatef(.3, 0.0, 0.0);
  glutSolidSphere(1, 20, 20);
  glPopMatrix();
  glColor3ub(0, 0, 255);
  glScalef(.5, .5, 6);
  glTranslatef(0, 0, .5);
  glutSolidCube(1);
  glPopMatrix();

  animate(controls);
  //  glRotatef(.5, 1.0, 0.0, 0.0);
}

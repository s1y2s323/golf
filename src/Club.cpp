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
void Club::update(std::vector <bool> controls) {

  //spacebar
  if(controls[0]) {
    clubSwing = 0;
  }

  //W
  if(controls[2]) {
    clubSwing += 2;
  }

  //S
  if(controls[1]) {
    clubSwing -= 2;
  }

  if(clubSwing > 0) {
    clubSwing = 0;
  }

  if(clubSwing < -30) {
    clubSwing = -30;
  }
}

/*F***********************************************************
 * DEFAULT CONSTRUCTOR
 * 
 * NOTES :   
 *F*/
Club::Club() {
  x = 10;
  y = 5;
  z = 0;
  clubSwing = 0;
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
void Club::draw(std::vector <bool> controls) {

  glPushMatrix();
  glTranslatef(x - 1, (z + (clubSwing / 10)) - .2, (y - 3.7));
  glRotatef(clubSwing, 1, 0, 0);
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
}

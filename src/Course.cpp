#include "Course.hpp"

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
void Course::draw(std::vector <bool> controls) {
  
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glClearColor(.5, .5, .8, 0);
  ground->draw();
  club->draw(controls);
  ball->draw();
}

/*F***********************************************************
 * 
 * 
 * PURPOSE : 
 *
 * RETURN :  
 *
 * NOTES :   
 *F*/
bool Course::update(std::vector <bool> controls) {
 
  //spacebar pressed
  if(controls[0]) {
    ball->hit(club->clubSwing, ground->groundR);
  }

  ball->update(controls);
  ground->update(controls);
  club->update(controls);

  return false;
}

/*F***********************************************************
 * 
 * 
 * PURPOSE : 
 *
 * RETURN :  
 *
 * NOTES :   
 *F*/
Course::Course() {
  
  glRotatef(20, 1.0, 0.0, 0.0);
  ball = new Ball();
  club = new Club();
  ground = new Ground();
}

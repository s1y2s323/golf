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
  ground->draw();
  ship->draw(controls);
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
 
  ground->update(controls);

  //we did not win
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
  ship = new Ship();
  ground = new Ground();
}

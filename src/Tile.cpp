#include "Tile.hpp"

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
void Tile::update(std::vector <bool> controls,
		  float x0, float y0, float z0) {

  //we are setting the ground
  //when the user won the game
  if(x0 || y0 || z0) {
    x = x0;
    y = y0;
    z = z0;
  }


  //spacebar
  if(controls[0]) {
    tileR += 10;
  }

  //W
  if(controls[2]) {

  }

  //A
  if(controls[3]) {
    tileR += 10;
  }

  //S
  if(controls[1]) {

  }

  //D
  if(controls[4]) {
    tileR -= 10;
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
void Tile::draw(void) {
  glPushMatrix();
  glColor3ub(0, 100, 0);
  glRotatef(tileR, 0, 0, 1);
  glTranslatef((x + 10), (z), (y));
  glutSolidCube(1);
  glPopMatrix();
}

/*F***********************************************************
 * DEFAULT CONSTRUCTOR
 * 
 * NOTES :   
 *F*/
Tile::Tile() {
  xv = 0;
  yv = 0;
  zv = 0;
  tileR = 0;
}

/*F***********************************************************
 * DEFAULT CONSTRUCTOR
 * 
 * NOTES :   
 *F*/
Tile::Tile(float xl, float yl, float zl, float r) {
  x = xl;
  y = yl;
  z = zl;
  tileR = r;
}

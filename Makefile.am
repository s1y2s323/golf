bin_PROGRAMS = golf

#files of project
golf_SOURCES = src/main.cpp\
src/GolfGame.cpp\
src/GolfGame.hpp\
src/Course.cpp\
src/Course.hpp\
src/Game.cpp\
src/Game.hpp\
src/Club.hpp\
src/Club.cpp\
src/Ground.cpp\
src/Ground.hpp\
src/Vector3d.hpp\
src/Vector3d.cpp\
src/Platform.hpp\
src/Tile.cpp\
src/Tile.hpp\
src/Platform.hpp\
src/Platform.cpp\
src/Font.hpp\
src/Font.cpp\
src/Ball.hpp\
src/Ball.cpp

AM_CXXFLAGS = -pedantic -O3 -std=c++14 -Werror -g 

#using an m4 directory for macros
ACLOCAL_AMFLAGS = -I m4 --install

#letting autoconf know about the m4 dir
EXTRA_DIST = m4/NOTES

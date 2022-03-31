#include <iostream>
#include <cmath>
#include "funcs.h"
#include "coord3d.h"

// add functions here

double length(Coord3D *p) {
  double distance;
  Coord3D* ptr = p;
  //Coord3D point = *ptr;
  distance = pow(ptr->x,2) + pow(ptr->y,2) + pow(ptr->z,2);
  distance = sqrt(distance);
  return distance;
}

Coord3D* fartherFromOrigin(Coord3D *p1, Coord3D *p2) {
  double len1;
  double len2;
  Coord3D* farther;
  len1 = length(p1);
  len2 = length(p2);
  if (len1 > len2) {
    farther = p1;
    return farther;
  }
  else {
    farther = p2;
    return farther;
  }
}

void move(Coord3D *ppos, Coord3D *pvel, double dt) {
  double newx,newy,newz;
  newx = ppos->x + ((pvel->x)*dt);
  newy = ppos->y + ((pvel->y)*dt);
  newz = ppos->z + ((pvel->z)*dt);
  ppos->x = newx;
  ppos->y = newy;
  ppos->z = newz;
}

Coord3D* createCoord3D(double x, double y, double z) {
  Coord3D* ptr = new Coord3D();
  ptr->x = x;
  ptr->y = y;
  ptr->z = z;
  //Coord3D* ptr = &newCord;
  return ptr;
}

void deleteCoord3D(Coord3D *p) {
  delete p;
}

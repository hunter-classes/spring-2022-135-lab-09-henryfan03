#include <iostream>
#include "coord3d.h"
#include "funcs.h"

int main()
{
  std::cout << "Task A:" << std::endl;
  std::cout << "-------------------------" << std::endl;
  Coord3D pointP = {10, 20, 30};
  std::cout << "Coord3D pointP = {10, 20, 30};" << std::endl;
  std::cout << "length(&pointP):" << std::endl;
  std::cout << length(&pointP) << std::endl; // would print 37.4166
  //
  std::cout << std::endl;
  //Coord3D pointP = {10, 20, 30};
  std::cout << "Task B:" << std::endl;
  std::cout << "-------------------------" << std::endl;
  std::cout << "Coord3D pointQ = {-20, 21, -22};" << std::endl;
  Coord3D pointQ = {-20, 21, -22};
  std::cout << "Address of P: " << &pointP << std::endl;
  std::cout << "Address of Q: " << &pointQ << std::endl << std::endl;
  Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
  std::cout << "ans = " << ans << std::endl;
  std::cout << std::endl;
  Coord3D pos = {0, 0, 100.0};
  std::cout << "Task C:" << std::endl;
  std::cout << "-------------------------" << std::endl;
  std::cout << "Coord3D pos = {0, 0, 100.0};" << std::endl;
  Coord3D vel = {1, -5, 0.2};
  std::cout << "Coord3D vel = {1, -5, 0.2};" << std::endl;
  std::cout << "move(&pos, &vel, 2.0);" << std::endl;
  move(&pos, &vel, 2.0); // object pos gets changed
  std::cout << pos.x << " " << pos.y << " " << pos.z << std::endl;
  // prints: 2 -10 100.4
  std::cout << std::endl;
  std::cout << "Task E:" << std::endl;
  std::cout << "-------------------------" << std::endl;
  Coord3D *generated1 = createCoord3D(1,2,3);
  std::cout << "Coord3D *generated1 = createCoord3D(1,2,3);" << std::endl;
  std::cout << "generated1: {" << generated1->x << "," << generated1->y << "," << generated1->z << "}" << std::endl;
  std::cout << "&generated1: " << generated1 << std::endl;
  Coord3D *generated2 = createCoord3D(123,20,1293);
  std::cout << "Coord3D *generated2 = createCoord3D(123,20,1293);" << std::endl;
  std::cout << "generated2: {" << generated2->x << "," << generated2->y << "," << generated2->z << "}" << std::endl;
  std::cout << "&generated2: " << generated2 << std::endl;
  Coord3D *generated3 = createCoord3D(-203,23,300);
  std::cout << "Coord3D *generated3 = createCoord3D(-203,23,300);" << std::endl;
  std::cout << "generated3: {" << generated3->x << "," << generated3->y << "," << generated3->z << "}" << std::endl;
  std::cout << "&generated3: " << generated3 << std::endl;
  deleteCoord3D(generated1);
  deleteCoord3D(generated2);
  deleteCoord3D(generated3);
  std::cout << std::endl << std::endl;
  return 0;
}

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "coord3d.h"
#include "doctest.h"
#include "funcs.h"

// add your tests here

TEST_CASE("Length") {
  Coord3D pointP = {10, 20, 30};
  CHECK(((length(&pointP) - 37.4166) < 0.01));
  }

TEST_CASE("Farther") {
  Coord3D pointP = {10, 20, 30};
  Coord3D pointQ = {-20, 21, -22};
  CHECK(fartherFromOrigin(&pointP, &pointQ) == &pointP);
  }

TEST_CASE("Velocity Distance") {
  Coord3D pos = {0, 0, 100.0};
  Coord3D vel = {1, -5, 0.2};
  Coord3D expected = {2, -10, 100.4};
  move(&pos, &vel, 2.0);
  CHECK(pos.x == expected.x);
  CHECK(pos.y == expected.y);
  CHECK(pos.z == expected.z);
  }

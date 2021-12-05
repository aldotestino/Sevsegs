#ifndef Sevsegs_h
#define Sevsegs_h

#include "Arduino.h";

class Sevsegs
{
public:
  Sevsegs(int a, int b, int c, int d, int e, int f, int g);
  void clean();
  void print(int n);
  void countUp(int millis);
  void countDown(int millis);

private:
  int _pins[7];
  int _nums[10][7] = {
      {1, 1, 1, 1, 1, 1, 0},
      {0, 1, 1, 0, 0, 0, 0},
      {1, 1, 0, 1, 1, 0, 1},
      {1, 1, 1, 1, 0, 0, 1},
      {0, 1, 1, 0, 0, 1, 1},
      {1, 0, 1, 1, 0, 1, 1},
      {0, 0, 1, 1, 1, 1, 1},
      {1, 1, 1, 0, 0, 0, 0},
      {1, 1, 1, 1, 1, 1, 1},
      {1, 1, 1, 0, 0, 1, 1}};
};

#endif
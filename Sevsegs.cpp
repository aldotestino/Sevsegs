#include "Arduino.h";
#include "Sevsegs.h";

Sevsegs::Sevsegs(int a, int b, int c, int d, int e, int f, int g)
{
  _pins[0] = a;
  _pins[1] = b;
  _pins[2] = c;
  _pins[3] = d;
  _pins[4] = e;
  _pins[5] = f;
  _pins[6] = g;
  pinMode(_pins[0], OUTPUT);
  pinMode(_pins[1], OUTPUT);
  pinMode(_pins[2], OUTPUT);
  pinMode(_pins[3], OUTPUT);
  pinMode(_pins[4], OUTPUT);
  pinMode(_pins[5], OUTPUT);
  pinMode(_pins[6], OUTPUT);
}

void Sevsegs::clean()
{
  for (int i = 0; i < 7; i++)
  {
    digitalWrite(_pins[i], LOW);
  }
}

void Sevsegs::print(int n)
{
  clean();
  for (int i = 0; i < 7; i++)
  {
    digitalWrite(_pins[i], _nums[n][i]);
  }
}

void Sevsegs::countUp(int millis)
{
  for (int i = 0; i < 10; i++)
  {
    print(i);
    delay(millis);
  }
}

void Sevsegs::countDown(int millis)
{
  for (int i = 9; i >= 0; i--)
  {
    print(i);
    delay(millis);
  }
}

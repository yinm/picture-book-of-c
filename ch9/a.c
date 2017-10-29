#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main()
{
  int kakudo = 30;
  double a, b, c;

  a = sin(kakudo * PI / 188);
  b = cos(kakudo * PI / 180);
  c = tan(kakudo * PI / 180);
  
  printf("角度%d度\n sin %f\n cos %f\n tan %f\n", kakudo, a, b, c);
}

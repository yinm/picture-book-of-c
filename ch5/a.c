#include <stdio.h>

void dispnum(int a) 
{
  printf("引数の値は%d\n", a);
}

int main()
{
  int x = 10;

  dispnum(5);
  dispnum(x);
}

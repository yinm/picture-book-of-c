#include <stdio.h>

void swapByVal(int, int);
void swapByRef(int *, int *);

int main()
{
  int a = 2;
  int b = 7;

  printf("a=%d, b=%d\n", a, b);
  swapByVal(a, b);
  printf("a=%d, b=%d\n", a, b);
  swapByRef(&a, &b);
  printf("a=%d, b=%d\n", a, b);
}

void swapByVal(int x, int y)
{
  int temp;
  temp = x;
  x = y;
  y = temp;
}

void swapByRef(int *x, int *y)
{
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}


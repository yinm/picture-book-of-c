#include <stdio.h>

int addnum(int a, int b)
{
  int x;
  x = a + b;
  return x;
}

main()
{
  int sum = addnum(2, 3);
  printf("%d", sum);
}

#include <stdio.h>

main()
{
  int a = 30;
  int x;

  x = (0 <= a && a <= 100) ? a : 0;
  printf("%d\n", x);
}

#include <stdio.h>

main()
{
  int a[2][3] = {
    {10, 20, 30},
    {40, 50, 60}
  };

  a[0][2] = 0;
  printf("%d\n", a[1][0]);
}

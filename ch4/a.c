#include <stdio.h>

main()
{
  int a[2][3] = {
    {10, 20, 30},
    {40, 50, 60}
  };
  a[0][2] = 0;

  int x, y;
  for (y = 0; y < 2; y++) {
    for (x = 0; x < 3; x++) {
      printf("a[%d][%d]=%d ", y, x, a[y][x]);
    }
    printf("\n");
  }
}

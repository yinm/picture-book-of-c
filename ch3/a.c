#include <stdio.h>

main()
{
  int a = 1;
  int b = 1;

  for (a = 0; a < 5; a++)
  {
    if (a + b >= 3)
      break;
    printf("%d+%d=%d\n", a, b, a + b);
  }
}

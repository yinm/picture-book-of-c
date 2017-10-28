#include <stdio.h>

main()
{
  int a = 1;
  int b = 1;

  for (a = 1; a < 5; a++)
  {
    if (a + b == 3)
      continue;
    printf("%d+%d=%d\n", a, b, a + b);
  }
}

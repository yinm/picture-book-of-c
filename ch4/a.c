#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

main()
{
  char *b;
  char a[4] = {20, 40, 30, 10};

  b = (char *)malloc(sizeof(char)*200);
  if (!b)
    return 1;

  memcpy(b, a, sizeof(char)*200);
  printf("%d %d %d %d\n", b[0], b[1], b[2], b[3]);
  free(b);
}


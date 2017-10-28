#include <stdio.h>

#define LOOPNUM 3

int main()
{
  int i;
  for (i = 0; i < LOOPNUM; i++)
    printf("LoopCount:%d\n", i + 1);
}

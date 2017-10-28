#include <stdio.h>

main()
{
  int a = 15;
  int b = 0x11;

  printf("10進数の%dは、16進数では%X\n", a, a);
  printf("16進数の%Xは、10進数では%d\n", b, b);
}

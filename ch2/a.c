#include <stdio.h>

main()
{
  int a = 1;
  int b = 1;

  printf("前置だと%dになります。\n", ++a);
  printf("もう一度%dを出力しておきます\n", a);

  printf("後置だと%dになります。\n", b++);
  printf("もう一度%dを出力しておきます\n", b);
}

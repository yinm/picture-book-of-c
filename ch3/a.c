#include <stdio.h>

main()
{
  int s = 65;
  printf("あなたの点数は%d点です.\n", s);

  if (s < 70)
  {
    printf("平均まであと%d点\n", 70 - s);
    printf("がんばりましょう!\n");
  }
  else
  {
    printf("よくできました!\n");
  }
}

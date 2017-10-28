#include <stdio.h>
#define HIKU(x, y) ((x) - (y))

int main()
{
  printf("マクロの実行結果: %d\n", HIKU(5, 3));
}

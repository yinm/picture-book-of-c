#include <stdio.h>

#define JIJYO(x) ((x)*(x))

int main()
{
  int i = 1;
  while (i <= 5) {
    printf("結果: %d\n", JIJYO(i++));
  }
}

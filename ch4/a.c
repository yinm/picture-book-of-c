#include <stdio.h>

int main()
{
  char x = 4;
  char y;
  char *p = &x;
  y = *p;

  printf("変数xの値は%dです\n", y);
}

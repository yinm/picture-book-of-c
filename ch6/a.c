#include <stdio.h>

int main()
{
  char s[30];
  fgets(s, 29, stdin);
  fputs(s, stdout);
  fputs("error!\n", stderr);
}

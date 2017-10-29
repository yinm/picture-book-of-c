#include <stdio.h>

int main()
{
  int i = 0;
  char a[] = "NET";
  char b[4];

  while (a[i] != '\0')
  {
    b[i] = a[2-i];
    i++;
  }

  b[3] = '\0';
  printf("%s は逆から読むと %s\n", a, b);
}

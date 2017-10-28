#include <stdio.h>

int kaijo(int);

int main()
{
  int n = kaijo(5);
  printf("%d", n);
}

int kaijo(int n)
{
  if (n == 0)
    return 1;
  else
    return (n * kaijo(n - 1));
}

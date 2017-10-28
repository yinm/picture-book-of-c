#include <stdio.h>
#include <string.h>

main()
{
  char a[] = "ABC";
  char b[] = "ABCD";
  int c = strcmp(a, b);

  printf("%d", c);
}


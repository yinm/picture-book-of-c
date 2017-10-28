#include <stdio.h>
#include <string.h>

main()
{
  char a[6] = "ABC";
  char b[] = "de";

  printf("%s", strcat(a, b));
}


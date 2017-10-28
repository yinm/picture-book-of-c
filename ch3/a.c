#include <stdio.h>

main()
{
  char c = '#';

  printf("%cは", c);

  if ('0' <= c && c <= '9')
    printf("数字です.\n");
  else if('a' <= c && c <= 'z')
    printf("小文字です.\n");
  else if('A' <= c && c <= 'Z')
    printf("大文字です.\n");
  else
    printf("記号です.\n");
}

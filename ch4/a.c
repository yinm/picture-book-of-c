#include <stdio.h>

main()
{
  char s[] = "I love cat and dog.";
  char c = 'a';
  char *p = s;
  int n = 0;

  printf("\"%s\"の中から\'%c\'を探します\n", s, c);
  while(1) {
    p = strchr(p, c);
    if (!p)
      break;
    printf("%d文字目で発見しました。\n", p - s + 1);
    n++;
    p++;
  }
}

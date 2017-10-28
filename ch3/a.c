#include <stdio.h>

main()
{
  char c = '\0';
  char prevletter;
  int wordnum;
  int word_in;

  while(1)
  {
    wordnum = 0;
    word_in = 1;
    prevletter = '\0';
    printf("文字列を入力してください:");

    while(1)
    {
      c = getchar();
      if (c == '\n')
      {
        if (word_in)
          wordnum++;
        break;
      }

      prevletter = c;
      if (c == ' ' || c == '.')
      {
        if (word_in)
        {
          wordnum++;
          word_in = 0;
        }
      }
      else
        word_in = 1;
    }

    if (prevletter == '\0')
      break;
    printf("ワード数: %d\n", wordnum);
  }
}

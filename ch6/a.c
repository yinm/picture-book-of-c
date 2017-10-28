#include <stdio.h>

int main()
{
  FILE *fp;
  int a = 100;
  int b = 5;
  int c = 40;
  int x = 1;
  int y = 10;
  int z = 100;
  char delm[] = "----====----\n";

  fp = fopen("mat.txt", "w");
  if (fp == NULL)
    return 1;
  fputs(delm, fp);
  fprintf(fp, "%4d%4d%4d\n%4d%4d%4d\n", a, b, c, x, y, z);
  fputs(delm, fp);
  fclose(fp);
}

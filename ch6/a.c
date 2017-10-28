#include <stdio.h>

int main()
{
  FILE *fp;
  char filename[] = "bintest2.dat";
  int buf_w[10]; 
  int buf_r[10];
  int i;

  for (i = 0; i < 10; i++)
    buf_w[i] = (i + 1) * 10;
  if (! (fp = fopen(filename, "wb")))
    return 1;
  if (fwrite(buf_w, sizeof(int), 10, fp) != 10) {
    fclose(fp);
    return 1;
  }
  fclose(fp);

  if (! (fp = fopen(filename, "rb")))
    return 1;
  if (fread(buf_r, sizeof(int), 10, fp) != 10) {
    fclose(fp);
    return 1;
  }
  fclose(fp);

  for (i = 0; i < 10; i++) {
    printf("%d ", buf_r[i]);
  }
}

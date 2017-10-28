#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char usage[] = "usage: trash <-d> filename\n";
  int ret = 0;
  char newfilename[256] = "";

  if (argc <= 1) {
    printf(usage);
    return 1;
  }
  else if(strcmp(argv[1], "-d") == 0) {
    if (argc <= 2) {
      printf(usage);
      return 2;
    }
    ret = remove(argv[2]);
    if (ret == 0)
      printf("ファイルを削除しました\n");
    else
      printf("ファイルを削除できませんでした\n");
  }
  else {
    sprintf(newfilename, "%s.bak", argv[1]);
    ret = rename(argv[1], newfilename);
    if (ret == 0)
      printf("ファイル名の最後に.bakを付加しました\n");
    else
      printf("ファイル名の変更ができませんでした\n");
  }
}


#include <stdio.h>
#include "callib.h"

int main()
{
  CALORIE cal[500] = {
    {"米飯", 150.0},
    {"中華麺", 57.1},
    {"そば", 133.3},
    {"うどん", 100.0},
    {"素麺", 133.3},
    {"食パン", 250.0}
  };
  int cal_num = 6;
  int mode = 0;

  printf("カロリー計算ツール\n");

  while (1) {
    printf("登録は1を、計算は2を、終了は0を入力してください: ");
    scanf("%d", &mode);
    if (mode == 0)
      break;
    else if (mode == 1)
      cal_num = calregist(cal, cal_num);
    else if (mode == 2)
      printf("総カロリー: %6.2fkcal\n\n", calcalc(cal, cal_num));
  }

  return 0;
}

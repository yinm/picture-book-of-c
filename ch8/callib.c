#include <stdio.h>
#include <string.h>
#include "callib.h"

int calregist(CALORIE *pcal, int num)
{
  printf("食品名を入力してください: ");
  scanf("%s", (pcal + num)->name);
  printf("その食品のカロリーを入力してください[kcal/100g]: ");
  scanf("%f", &((pcal + num)->value));
  printf("登録しました。\n\n");
  return num + 1;
}

float calcalc(CALORIE *pcal, int num)
{
  char name[40];
  float gram;
  float totalcal = 0.0;
  int i;

  printf("--食品名一覧--------------\n");
  for (i = 0; i < num; i++)
    printf("%s\t", (pcal + i)->name);
  printf("\n---------------------------\n");

  while (1) {
    printf("食品名 (endで計算): ");
    scanf("%s", name);
    if (strcmp(name, "end") == 0)
      break;
    printf("グラム数: ");
    scanf("%f", &gram);
    for (i = 0; i < num; i++) {
      if (strcmp(name, (pcal + i)->name) == 0) {
        totalcal += (pcal + i)->value * gram / 100.0;
        break;
      }
    }
  }

  return totalcal;
}

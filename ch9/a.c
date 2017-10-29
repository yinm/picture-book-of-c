#include <stdio.h>

union _user {
  int userid;
  char name[10];
} user;

int main()
{
  int flag = 0;
  printf("入力項目は？(0 = ID, 1 = 名前) ");
  scanf("%d", &flag);

  if (flag) {
    printf("name? ");
    scanf("%s", user.name);
    printf("名前は%sですね。\n", user.name);
  } else {
    printf("ID? ");
    scanf("%d", &(user.userid));
    printf("IDは%dですね。\n", user.userid);
  }
}

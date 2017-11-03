#include <stdio.h>

struct data {
  int no;
  char name[10];
  int age;
};

int main()
{
  struct data list[3] = {
    {1, "nagashima", 39},
    {2, "yamada", 33},
    {3, "tonegawa", 31}
  };

  int i;
  for (i = 0; i < 3; i++) {
    printf("%d %s %d\n", list[i].no, list[i].name, list[i].age);
  }
}

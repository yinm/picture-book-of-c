#include <stdio.h>

struct data {
  int no;
  char name[10];
  int age;
};

struct data list[3] = {
  {1, "nagayama", 39},
  {2, "yamada", 33},
  {3, "tonegawa", 31}
};

int main()
{
  int i;
  for (i = 0; i < 3; i++)
    printf("%d %s %d\n", list[i].no, list[i].name, list[i].age);
}

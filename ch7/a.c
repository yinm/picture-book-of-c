#include <stdio.h>

struct data {
  int no;
  char name[10];
  int age;
};

struct data list[3] = {
  {1, "nagashima", 39},
  {2, "yamada", 33},
  {3, "tonegawa", 31}
};

int main()
{
  struct data *sp;
  for (sp = list; sp != list+3; sp++)
    printf("%d %s %d\n", sp->no, sp->name, sp->age);
}

#include <stdio.h>

struct _PROFILE {
  char name[40];
  int age;
};

int main()
{
  struct _PROFILE prof[2] = {
    {"Maiko", 20},
    {"Naoki", 31}
  };
  int i;
  for (i = 0; i < 2; i++)
    printf("%sさんは%d歳\n",
        prof[i].name, prof[i].age);
}

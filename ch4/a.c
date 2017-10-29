#include <stdio.h>

int main()
{
  int a[4] = {10, 29, 30, 40};
  printf("配列a[2]の値は%d\n", *(a+2));
  printf("配列a[0]の値に2を足すと%d\n", *a+2);
}

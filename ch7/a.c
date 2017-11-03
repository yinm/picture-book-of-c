#include <stdio.h>

struct _point2d {
  double x;
  double y;
};

int main()
{
  struct _point2d pt = {
    30.0,
    23.6
  };

  printf("pt = (%4.1f, %4.1f)\n", pt.x, pt.y);
}

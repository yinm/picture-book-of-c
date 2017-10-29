#include <stdio.h>
#include <time.h>

int main()
{
  time_t ct;
  struct tm *now;
  ct = time(NULL);
  now = localtime(&ct);

  printf("%d年%d月%d日 %2d:%2d:%2d\n",
      (now->tm_year) + 1900,
      (now->tm_mon) + 1,
      now->tm_mday,
      now->tm_hour,
      now->tm_min,
      now->tm_sec
  );

  printf("%s", ctime(&ct));
}

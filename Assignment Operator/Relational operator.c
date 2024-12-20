#include <stdio.h>

int main(void)
{
  int nam1, nam2;

  nam1 = 3;
  nam2 = 5;

  // relation operator : 0=flose and 1=true

  printf("%d = %d: %d\n", nam1, nam2, nam1 == nam2);

  printf("%d != %d: %d\n", nam1, nam2, nam1 != nam2);

  printf("%d > %d: %d\n", nam1, nam2, nam1 > nam2);

  printf("%d < %d: %d\n", nam1, nam2, nam1 < nam2);

  printf("%d >= %d: %d\n", nam1, nam2, nam1 >= nam2);

  printf("%d <= %d: %d\n", nam1, nam2, nam1 <= nam2);


    return 0;
}

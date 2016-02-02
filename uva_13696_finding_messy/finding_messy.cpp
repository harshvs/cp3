#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main()
{
  int c;
  scanf("%d", &c);
  while (c-- != 0)
    {
      int n, m;
      scanf("%d %d", &n, &m);
      n -= 2;
      m -= 2;
      int v = (n / 3 + ((n % 3 != 0) ? 1 : 0)) * (m / 3 + ((m % 3 != 0) ? 1 : 0));
      printf("%d\n", v);
    }

  return 0;
}

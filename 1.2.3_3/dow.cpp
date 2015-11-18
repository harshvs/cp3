#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main()
{
  class Func
  {
  public:
    static bool isLeap(int y)
    {
      return y % 4 == 0 && (y % 100 != 0 || y % 400 == 0);
    }
    static int daysTillYear(int y)
    {
      int total = 0;
      while (--y != 0) { total += (365 + (isLeap(y) ? 1 : 0)); }
      return total;
    }
    static int daysInMonth(int m, int y)
    {
      static int days[]{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
      return days[m] + ((m == 2 && isLeap(y)) ? 1 : 0);
    }
    static int daysTillMonth(int m, int y)
    {
      int total = 0;
      while (--m != 0) { total += daysInMonth(m, y); };
      return total;
    }
    static int totalDays(int d, int m,  int y)
    {
      return d + daysTillMonth(m, y) + daysTillYear(y);
    }
  };

  int d, m, y;
  scanf("%d-%d-%d", &d, &m, &y);
  int daysDiff = (7 + (Func::totalDays(d, m, y) - Func::totalDays(9, 8, 2010))%7)%7;
  static char days[][4] = { "Mon", "Tue", "Wed", "Thr", "Fri", "Sat", "Sun" };
  printf("%s\n", days[daysDiff]);
  return 0;
}

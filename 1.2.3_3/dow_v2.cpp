#include <stdio.h>

int monthShifts[]{ 0, 3, 0, 3, 2, 3, 2, 3, 3, 2, 3, 2, 3 };
char days[][4] = { "Mon", "Tue", "Wed", "Thr", "Fri", "Sat", "Sun" };

bool isLeap(int y)
{
  return y % 4 == 0 && (y % 100 != 0 || y % 400 == 0);
}

int totalDayShifts(int d, int m, int y)
{
  int dayShifts = d + (m > 2 && isLeap(y)?1:0);
  while (--m != 0) { dayShifts += monthShifts[m]; }  
  while (--y != 0) { dayShifts += (1 + (isLeap(y) ? 1 : 0)); }
  return dayShifts%7;
}

int main()
{
  int d, m, y;
  scanf("%d-%d-%d", &d, &m, &y);
  int daysDiff = (7 + (totalDayShifts(d, m, y) - totalDayShifts(9, 8, 2010)))%7;
  printf("%s\n", days[daysDiff]);
  return 0;
}

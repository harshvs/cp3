#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main()
{
  int n;
  scanf("%d", &n);
  double pow10n = pow(10, n);
  double val = round(M_PI*pow10n) / pow10n;
  printf("%.*g\n", n + 1, val);
  return 0;
}

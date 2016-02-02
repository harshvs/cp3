#include <cstdio>
#include <cstdlib>
#include <cmath>

int main()
{
    int cases;
    scanf("%d", &cases);
    while(cases--)
    {
        int n;
        scanf("%d", &n);
        int val = (((((567 * n) / 9) + 7492) * 235) / 47) - 498;
        int tens = abs((val / 10) %10);
        printf("%d\n", tens);
    }
}

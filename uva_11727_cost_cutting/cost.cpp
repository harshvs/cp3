#include <cstdio>
#include <cstdlib>

int getMid(int x, int y, int z)
{
    if(x <= y && y <= z || x >= y && y >= z) return y;
    else if(y <= z && z <= x || y >= z && z >= x) return z;
    else return x; 
}

int main()
{
    int cases;
    scanf("%d", &cases);
    int count = 1;
    while(cases--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        printf("Case %d: %d\n", count++, getMid(a, b, c));
    }
}

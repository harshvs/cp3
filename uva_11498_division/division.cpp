#include <cstdlib>
#include <cstdio>

int main()
{
    int cases;
    while(true)
    {
        scanf("%d", &cases);
        if(cases == 0)
        {
            break;
        }

        int divx, divy;
        scanf("%d %d", &divx, &divy);
        while(cases--)
        {
            int x, y;
            scanf("%d %d", &x, &y);
            char* loc;
            if(divx == x || divy == y) loc = "divisa";
            else if(x > divx && y > divy) loc = "NE";
            else if(x > divx && y < divy) loc = "SE";
            else if(x < divx && y > divy) loc = "NO";
            else loc = "SO";
            printf("%s\n", loc);
        }
    }
}

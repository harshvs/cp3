#include <cstdio>
#include <cstdlib>
#include <cstring>

int main()
{
    int cases;
    scanf("%d", &cases);
    int bal = 0;
    char input[32];
    while(cases--)
    {
        scanf("%s", &input);
        if(strcmp(input, "report") == 0)
        {
            printf("%d\n", bal);
        }
        else
        {
            // it is donate as there is no other cases.
            int val;
            scanf("%d", &val);
            bal += val;
        }
    }
}

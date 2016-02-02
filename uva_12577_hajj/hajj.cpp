#include <cstdio>
#include <cstdlib>
#include <cstring>

int main()
{
    int caseNo = 1;
    char input[32];
    while(true)
    {
        scanf("%s", &input);
        
        if( strcmp(input, "*") == 0)
        {
            break;
        }

        char *result;
        if(strcmp(input, "Hajj") == 0)
        {
            result = "Hajj-e-Akbar";
        }
        else
        {
            result = "Hajj-e-Asghar";
        }

        printf("Case %d: %s\n", caseNo++, result);
    }
}

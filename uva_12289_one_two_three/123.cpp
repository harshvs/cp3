#include <cstdio>
#include <cstdlib>
#include <cstring>

bool isPartialMatch(const char* str1, const char* str2)
{
    if(strlen(str1) == strlen(str2))
    {
        int len = strlen(str1);
        int mismatch = 0;
        for (int i = 0; i < len; i++) {
            if( *(str1 + i) != *(str2 + i) ) {
                mismatch++;
            }
        }

        return mismatch <= 1;
    }

    return false;
}

int main(int argc, char *argv[])
{
    int cases;
    scanf("%d", &cases);
    while(cases--)
    {
        char input[16];
        scanf("%s", &input);
        int num = isPartialMatch(input, "one") ? 1 : (isPartialMatch(input, "two") ? 2 : 3);
        printf("%d\n", num);
    }
    
    return 0;
}

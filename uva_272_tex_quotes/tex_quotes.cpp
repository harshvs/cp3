#include <cstdio>
#include <cstdlib>

int main()
{
    int c;
    bool inQ = false;
    while( (c = getchar()) != EOF)
    {
        if(c == '"')
        {
            char d = inQ ? '\'' : '`';
            putchar(d);
            putchar(d);
            inQ = !inQ;
        }
        else
        {
            putchar(c);
        }
    }
}

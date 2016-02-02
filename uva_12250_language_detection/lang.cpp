#include <cstdlib>
#include <cstdio>
#include <cstring>

int main()
{
    int caseNo = 1;
    char input[16];
    while(true)
    {
        scanf("%s", &input);
        if(strcmp(input, "#") == 0)
        {
            break;
        }

        char* lang = "UNKNOWN";
        if(strcmp(input, "HELLO") == 0) lang = "ENGLISH";
        else if(strcmp(input, "HOLA") == 0) lang = "SPANISH";
        else if(strcmp(input, "BONJOUR") == 0) lang = "FRENCH";
        else if(strcmp(input, "CIAO") == 0) lang = "ITALIAN";
        else if(strcmp(input, "HALLO") == 0) lang = "GERMAN";
        else if(strcmp(input, "ZDRAVSTVUJTE") == 0) lang = "RUSSIAN";

        printf("Case %d: %s\n", caseNo++, lang);

    }

}


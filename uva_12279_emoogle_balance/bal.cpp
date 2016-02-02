#include <cstdlib>
#include <cstdio>


int main()
{
    int caseNo = 1;
    while(true)
    {
        int eventCount;
        scanf("%d", &eventCount);

        if(eventCount == 0)
        {
            break;
        }

        int bal = 0;
        while(eventCount--)
        {
            int eventNo;
            scanf("%d", &eventNo);
            if(eventNo == 0) --bal; else bal++;
        }

        printf("Case %d: %d\n", caseNo++, bal);
    }
}

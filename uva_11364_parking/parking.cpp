#include <cstdlib>
#include <cstdio>
#include <climits>
#include <algorithm>


int main()
{
    int cases;
    scanf("%d", &cases);
    int count;
    while(cases--)
    {
        int min = INT_MAX;
        int max = INT_MIN;
        scanf("%d", &count);
        while(count--)
        {
            int pos;
            scanf("%d", &pos);
            min = std::min(min, pos);
            max = std::max(max, pos);
        }
        printf("%d\n", 2 * (max - min));
    }
}

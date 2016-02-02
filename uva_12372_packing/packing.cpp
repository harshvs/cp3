#include <cstdlib>
#include <cstdio>
#include <algorithm>

int main(int argc, char *argv[])
{
    int cases;
    scanf("%d", &cases);
    int count = 1;
    while (cases--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        int max = std::max(a, std::max(b, c));
        printf("Case %d: %s\n", count++, (max <= 20)? "good" : "bad"); 
    }
    return 0;
}



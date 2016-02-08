#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b;

    while(true)
    {
        cin>>a;
        cin>>b;
        if(a == -1 && b == -1)
        {
            break;
        }

        int diff = max(a , b) - min(a , b);
        int diffComp = 100 - diff;
        cout<<min(diff, diffComp)<<endl;
    }
}

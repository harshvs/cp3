#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int cases;
    cin>>cases;
    int caseNo = 1;

    while(cases--)
    {
        int mile = 0;
        int juice = 0;
        int samples;
        cin>>samples;
        while(samples--)
        {
            int duration;
            cin>>duration;
            mile += (duration/30 + 1)*10;
            juice += (duration/60 + 1)*15;
        }

        int minCost = min(mile, juice);

        string label = string((mile == minCost)?"Mile":"Juice") + string((juice == minCost && mile == minCost)?" Juice":"");
        cout<<"Case "<<caseNo<<": "<<label<<" "<<minCost<<endl;
        caseNo++;
    }
}

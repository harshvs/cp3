#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int cases;
    cin>>cases;
    int caseNo = 1;

    while(cases--)
    {
        int urlCount =  10;
        vector<pair<string, int>> urlList;
        int luckyFactor = 0;

        while(urlCount--)
        {
            string url;
            int relFactor;
            cin>>url;
            cin>>relFactor;
            urlList.push_back(make_pair(url, relFactor));
            luckyFactor = max(luckyFactor, relFactor);
        }

        cout<<"Case #"<<caseNo<<":"<<endl;
        for(auto url: urlList)
        {
            if(url.second == luckyFactor)
            {
                cout<<url.first<<endl;
            }
        }

        caseNo++;
    }
}

#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    int cases;

    cin>>cases;
    cin.ignore();

    cout<<"Lumberjacks:"<<endl;

    while(cases--)
    {
        string input;
        std::getline(std::cin, input);
        stringstream sstm(input);

        int orderType = -1; // -1 undefined, 0 Inc, 1 Dec, 2 Unordered
        int pastLen = -1;
        int nextLen = -1;

        while(sstm>>nextLen)
        {
            if(pastLen != -1)
            {
               if(orderType == -1)
               {
                   if(nextLen >= pastLen)
                   {
                       orderType = 0;
                   }
                   else
                   {
                       orderType = 1;
                   }
                }
                else if(orderType == 0 && nextLen < pastLen)
                {
                   orderType = 2;
                }
                else if(orderType == 1 && nextLen > pastLen)
                {
                    orderType = 2;
                }
            }

            pastLen = nextLen;
        }

        cout<<(orderType == 2 ? "Unordered" : "Ordered")<<endl;
    }
}

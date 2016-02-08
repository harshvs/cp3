#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    int cases;
    cin>>cases;
    cin.ignore(1);

    int caseCount = 1;

    while(cases--)
    {
        int max = -1;
        int nextSpeed;

        string input;
        std::getline(std::cin, input);
        stringstream sstm(input);

        while(sstm >> nextSpeed)
        {
            if(nextSpeed > max)
            {
                max = nextSpeed;
            }
        }

        cout<<"Case "<<caseCount++<<": "<<max<<endl;
    }
}

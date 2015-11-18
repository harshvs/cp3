#include <stdio.h>
#include <iostream>
#include <iterator>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

class BDay
{
public:
    int d, m, y;

    static bool compare(const BDay& b1, const BDay& b2)	{
	return (b1.m - b2.m != 0)? (b1.m < b2.m) : ((b1.d - b2.d != 0)? (b1.d < b2.d) : (b1.y < b2.y));
    }
};

ostream& operator<< (ostream& out, const BDay& bday)
{
    out<< bday.d << "/" << bday.m << "/" << bday.y;
    return out;
}

int main()
{
    int n;
    cin>>n;
    vector<BDay> bDays(n);

    for(int i=0; i<n; i++)
    {
	BDay& b = bDays[i];
	scanf("%d\/%d\/%d", &b.d, &b.m, &b.y);
    }

    sort(bDays.begin(), bDays.end(), BDay::compare);
    copy(bDays.begin(), bDays.end(), ostream_iterator<BDay>(cout, "\n"));
    return 0;
}

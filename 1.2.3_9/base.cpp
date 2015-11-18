#include <stdio.h>
#include <iostream>
#include <sstream>
#include <iterator>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;


int main()
{
    int base1;
    cin>>base1;

    string numStr;
    getline(cin, numStr);
    reverse(numStr.begin(), numStr.end());

    long value = 0;
    long pow = 1;
    for(char c:numStr)
    {
	int x = (c >= '0' && c <= '9')? (c - '0') : (c - 'A' + 10);
	if( x < 0  || x > 36) continue;
	value += x*pow;
	pow *= base1;
    }

    cout<<value<<endl;
    
    int base2;
    cin>>base2;
    ostringstream ostr;
    do 
    {
	int x = value % base2;
	value /= base2;
	char c = (x >= 0 && x <= 9) ? ('0' + x) : ('A' + x - 10);
	ostr<<c;
    }
    while(value != 0);

    string result = ostr.str();
    reverse(result.begin(), result.end());
    cout<<result<<endl;
    return 0;
}

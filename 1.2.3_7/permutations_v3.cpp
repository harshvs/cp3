#include <stdio.h>
#include <iostream>
#include <iterator>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<char> val(n);
    for(int i=0; i<n; i++)
    {
	val[i] = 'A' + i;
    }


    
    for (const auto i: val)
    {
	cout<<i;
    }

    cout<<endl;
}

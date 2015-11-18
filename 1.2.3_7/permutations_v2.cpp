#include <stdio.h>
#include <iostream>
#include <iterator>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;



int perm(int index, vector<char>& val)
{
    if(index == val.size())
    {
	for (const auto i: val)
	{
	    cout<<i;
	}

	cout<<endl;
	return 1;
    }

    int count = 0;
    for(int i=index; i<val.size(); i++)
    {
	swap(val[index], val[i]);
	count += perm(index + 1, val);
	swap(val[i], val[index]);
    }

    return count;
}

int main()
{
    int n;
    cin>>n;

    vector<char> val(n);
    for(int i=0; i<n; i++)
    {
	val[i] = 'A' + i;
    }

    int count = perm(0, val);

    cout<<endl<<count<<endl;
}

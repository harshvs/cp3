#include <stdio.h>
#include <iostream>
#include <iterator>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

void print(const vector<bool>& selections, const vector<int>& val)
{
    for(int i=0; i<val.size(); i++)
    {
	if(selections[i])
	{
	    cout<<val[i];
	}
    }

    cout<<endl;
}

int subsets(int index, vector<bool>& selections, const vector<int>& val)
{
    if(index == val.size())
    {
	print(selections, val);
	return 1;
    }

    int count = 0;
    selections[index] = true;
    count += subsets(index + 1, selections, val);
    selections[index] = false;
    count += subsets(index + 1, selections, val);
    return count;
}

int main()
{
    int n;
    cin>>n;

    vector<int> val(n);
    vector<bool> selections(n);

    for(int i=0; i<n; i++)
    {
	val[i] = i;
	selections[i] = false;
    }

    int setCount = subsets(0, selections, val);
    cout<<setCount<<endl;
    return 0;
}

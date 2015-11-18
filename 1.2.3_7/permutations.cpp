#include <stdio.h>
#include <iostream>
#include <iterator>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;


int perm(int index, const vector<char>& val, vector<char>& out, vector<bool>& marked)
{
    if(index == out.size())
    {
	for (const auto i: out)
	{
	    cout<<i;
	}

	cout<<endl;
	return 1;
    }

    int v = val[index];
    int count = 0;
    for(int i=0; i<out.size(); i++)
    {
	if(!marked[i])
	{
	    marked[i] = true;
	    out[i] = v;
	    count += perm(index + 1, val, out, marked);
	    marked[i] = false;
	}
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

    vector<char> out(n);
    vector<bool> used(n);

    for(auto& elem: used)
    {
	elem = false;
    }

    int count = perm(0, val, out, used);
    cout<<endl<<count<<endl;
}

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

    int count = 0;
    
    // print empty set
    print(selections, val);
    count++;

    // this is iterative logic, it is kind of counter of bit pattern (represented as bools)
    while(true)
    {
	int index = -1;
	while(++index < val.size())
	{
	    if(selections[index] == false)
	    {
		selections[index] = true;
		break;
	    }
	    else
	    {
		selections[index] = false;
	    }
	}

	// if wr have shoot the size that means that all bit are set and we are done.
	// Note our counter goes from 000..0 to 111..0
	if(index == val.size())
	{
	    break;
	}

	print(selections, val);
	count++;
    }

    cout<<count<<endl;
    return 0;
}

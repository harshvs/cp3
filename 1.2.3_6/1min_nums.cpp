#include <stdio.h>
#include <iostream>
#include <iterator>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <functional>
#define _USE_MATH_DEFINES
#include <math.h>
#include <random>
using namespace std;

int main()
{
    int L = 1000000;
    vector<int> nums(L);

    default_random_engine dre;
    uniform_int_distribution<int> di(0, 2000000);

    for(int i=0; i<L; i++)
    {
	nums[i] = di(dre);
    }

    sort(nums.begin(), nums.end(), less<int>());
    
    int value;
    cin>> value;

    // apply binary search
    bool found = false;
    int lowIndex = 0;
    int highIndex = nums.size() -1;
    cout<<endl;

    do
    {
	int index = (lowIndex + highIndex)/2;
	int v = nums[index];
	if(v == value)
	{
	    cout<<"*";
	    found = true;
	    break;
	}
	else if(v < value)
	{
	    cout<<"-";
	    lowIndex = index + 1;
	}
	else
	{
	    cout<<"+";
	    highIndex = index - 1;
	}
    }
    while(lowIndex < highIndex);

    cout<<(found? "FOUND" : "NOT FOUND")<<endl;
    return 0;
}

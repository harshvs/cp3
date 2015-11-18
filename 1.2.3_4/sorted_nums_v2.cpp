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
    vector<int> nums(n);

    for(int i=0; i < n; i++)
    {
	cin>>nums[i];
    }
	
    sort(nums.begin(), nums.end());
    auto newEnd = unique(nums.begin(), nums.end());

    copy(nums.begin(), newEnd, ostream_iterator<int>(cout, " "));
    cout<<endl;
    return 0;
}

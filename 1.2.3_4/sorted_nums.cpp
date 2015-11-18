#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

void printUnique(const vector<int>& vec)
{
  int size = vec.size();
  int lastNum = vec[0];
  printf("%d ", lastNum);
  
  for(int i=1; i<size; i++)
    {
      if(lastNum != vec[i])
	{
	  printf("%d ", vec[i]);
	  lastNum = vec[i];
	}
    }
  
  printf("\n");
}

int main()
{
  int n;
  scanf("%d", &n);
  vector<int> nums(n);

  for(int i=0; i < n; i++)
    {
      scanf("%d", &nums[i]);
    }
	
  sort(nums.begin(), nums.end());
  printUnique(nums);
  return 0;
}

#include <stdio.h>
#include <iostream>
#include <sstream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <functional>
#include <random>

using namespace std;

int main()
{
    std::default_random_engine generator;
    std::uniform_int_distribution<int> distribution(10000, 100000);
    auto rand = std::bind(distribution, generator);

    int size = rand();
    vector<int> numbers(size);
    for(int i=0; i<size; i++)
    {
	numbers[i] = rand();
    }

    
    
}

#include <stdio.h>
#include <iostream>
#include <sstream>
#include <iterator>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
    string line;
    getline(cin, line);

    int index = 0;
    bool inWord = false;

    while(index != line.size())
    {
	char nextChar = line[index];
	if(isspace(nextChar))
	{
	    inWord = false;
	}
	else if(inWord == false)
	{
	    inWord = true;

	    // check if new word is matching the pattern
	    // [0-9][a-z][a-z]
	    if((index + 3 < line.size() && isspace(line[index + 3]))
	       || (index + 3 == line.size()))
	    {
		// peek ahead and check
		if(isdigit(line[index]) && islower(line[index+1]) && islower(line[index+2]))
		{
		    line.replace(index, 3, "***");
		    index += 2;
		}
	    }
	}

	index++;
    }

    cout<<line<<endl;
    return 0;
}

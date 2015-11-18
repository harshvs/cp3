#include <stdio.h>
#include <iostream>
#include <sstream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <regex>
using namespace std;

int main()
{
    string line;
    getline(cin, line);
    regex reg("(^|\\s)([0-9][a-z][a-z])(\\s|$)");
    cout<<regex_replace(line,
			reg,
			"$1***$3")
	<<endl;
    return 0;
}

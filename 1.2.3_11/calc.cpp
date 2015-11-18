#include <stdio.h>
#include <iostream>
#include <sstream>
#include <iterator>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

void evalTopOp(stack<char>& opStack, stack<double>& valStack)
{
    double v1 = valStack.top(); valStack.pop();
    double v2 = valStack.top(); valStack.pop();
    double newVal = 0;
    char op = opStack.top(); opStack.pop();
    switch(op)
    {
    case '+': newVal = v2 + v1; break;
    case '-': newVal = v2 - v1; break;
    case '*': newVal = v2 * v1; break;
    case '/': newVal = v2 / v1; break;
    }
    valStack.push(newVal);
}

double calc(string input)
{
    stringstream stm(input);
    stack<char> opStack;
    stack<double> valStack;
    string opLevels = "()+-*/";

    valStack.push(0);
    while(!stm.eof())
    {
	char nextOp = 0;
	double nextVal = 0;

	stm>>nextOp;
	if(isspace(nextOp)) continue;
	int opIndex = opLevels.find(nextOp);
	if(opIndex == string::npos)
	{
	    nextOp = 0;
	    stm.unget();
	    stm>>nextVal;
	}

	if(nextOp == 0)
	{
	    cout<<"Val:"<<nextVal<<endl;
	    valStack.push(nextVal);
	}
	else
	{
	    cout<<"Op:"<<nextOp<<endl;
	    if(nextOp == '(')
	    {
		opStack.push(nextOp);
	    }
	    else if(nextOp == ')')
	    {
		while(opStack.top() != '(')
		{
		    evalTopOp(opStack, valStack);
		}
		opStack.pop();
	    }
	    else
	    {
		while(!opStack.empty() && opIndex < opLevels.find(opStack.top()))
		{
		    evalTopOp(opStack, valStack);
		}
		opStack.push(nextOp);
	    }
	}
    }

    while(!opStack.empty())
    {
	evalTopOp(opStack, valStack);
    }
    
    return valStack.top();
}

int main()
{
    string input;
    getline(cin, input);
    cout<<calc(input)<<endl;
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

bool balancedParentheses(const string& expression);

int main()
{
	string expression;
	cin >> expression;
	
	if (balancedParentheses(expression)) {
		cout << "correct." << endl;
	} else {
		cout << "incorrect." << endl;
	}
	
	return 0;
}

bool balancedParentheses(const string& expression)
{
	int opened = 0;
	for (int i = 0; i < expression.size() && opened >= 0; i++)
	{
		if (expression[i] == '(') opened++;
		else if (expression[i] == ')') opened--;
	}
	
	return opened == 0;
}


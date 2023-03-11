#include <iostream>
#include <string>
using namespace std;

bool parenthesesAreBalanced(string expression);

int main()
{
	string expression;
	cin >> expression;
	
	if (parenthesesAreBalanced(expression)) {
		cout << "correct." << endl;
	} else {
		cout << "incorrect." << endl;
	}
	
	return 0;
}

bool parenthesesAreBalanced(string expression)
{
	int opened = 0;
	for (int i = 0; i < expression.size() && opened >= 0; i++)
	{
		if (expression[i] == '(') opened++;
		else if (expression[i] == ')') opened--;
	}
	
	return opened == 0;
}


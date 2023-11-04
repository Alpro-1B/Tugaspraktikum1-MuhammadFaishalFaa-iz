#include <iostream>
using namespace std;

int main()
{
	int firstVariable, secondVariable;
	firstVariable = 10;
	secondVariable = 8;

	firstVariable = firstVariable + secondVariable;
	secondVariable = firstVariable - secondVariable;
	firstVariable = firstVariable - secondVariable;

	cout << "firstVariable = " << firstVariable << endl;
	cout << "secondVariable = " << secondVariable << endl;

	return 0;
}
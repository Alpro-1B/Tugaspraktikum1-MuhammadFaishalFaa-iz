#include <iostream>
using namespace std;

int main()
{
	int firstVariable, secondVariable, thirdVariable;
	firstVariable = 10;
	secondVariable = 8;

	thirdVariable = firstVariable;
	firstVariable = secondVariable;
	secondVariable = thirdVariable;

	cout << "firstVariable = " << firstVariable << endl;
	cout << "secondVariable = " << secondVariable << endl;

	return 0;
}
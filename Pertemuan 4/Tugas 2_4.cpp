#include <iostream>
using namespace std;

int main()
{
	int n, i, j, k;
	cout << "Masukkan tinggi segitiga sama sisi : ";
	cin >> n;

	char currentChar = '*';

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
		{
			cout << " ";
		}
		for (k = 1; k <= i; k++)
		{
			cout << " *";
		}
		cout << endl;
	}
	return 0;
}
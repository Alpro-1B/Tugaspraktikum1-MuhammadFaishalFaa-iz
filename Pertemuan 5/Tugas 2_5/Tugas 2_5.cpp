#include <iostream>
using namespace std;


void bintang(int nilai);

int main()
{

	int n;
	cout << "Masukkan tinggi segitiga sama sisi : ";
	cin >> n;

	bintang(n);

	return 0;
}

void bintang(int nilai)
{

	int n, i, j, k;

	char currentChar = '*';

	if (nilai <= 0)
	{
		do
		{
			cout << "Angka yang dimasukkan harus bernilai positif." << endl;
			cout << "Masukkan kembali tinggi segitiga sama sisi : ";
			cin >> n;
		} while (nilai > 0);
		{
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
		}
	}

}
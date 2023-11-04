#include <iostream>
using namespace std;

int main()
{
	int userOption;

	cout << "Program ini dibuat untuk mencari Bilangan Ganjil, Bilangan Genap, dan Bilangan Prima" << endl << endl;
	cout << "Tentukan bilangan mana yang ingin anda cari : " << endl;
	cout << "1. Bilangan Ganjil." << endl;
	cout << "2. Billangan Genap." << endl;
	cout << "3. Bilangan Prima." << endl;
	cout << "Bilangan yang anda pilih : ";
	cin >> userOption;

	switch (userOption)
	{
	case 1:
	{
		int batas;
		cout << "Bilangan Ganjil." << endl;
		cout << "Masukkan batas maksimal : ";
		cin >> batas;
		if (batas <= 0)
		{
			cout << "Batas harus lebih dari " << batas << endl;
		}
		else
		{
			cout << "Bilangan Ganjil dari nilai 1 hingga " << batas << " adalah : ";
			for (int i = 1; i <= batas; i += 2)
			{
				cout << i << " ";
			}
			cout << endl;
		}

		break;
	}
	case 2:
	{
		int batas;
		cout << "Billangan Genap." << endl;
		cout << "Masukkan batas maksimal : ";
		cin >> batas;
		if (batas <= 0)
		{
			cout << "Batas harus lebih dari " << batas << endl;
		}
		else
		{
			cout << "Bilangan Genap dari nilai 2 hingga " << batas << " adalah : ";
			for (int j = 2; j <= batas; j += 2)
			{
				cout << j << " ";
			}
			cout << endl;
		}

		break;
	}
	case 3:
	{
		int batas;

		do
		{
			cout << "Masukkan batas bilangan positif untuk mencari bilangan prima : ";
			cin >> batas;
		} while (batas <= 0);

		cout << "Bilangan prima antara 1 dan " << batas << " adalah: ";

		for (int k = 2; k <= batas; ++k)
		{
			int bilanganPrima = 1;
			for (int l = 2; l * l <= k; ++l)
			{
				if (k % l == 0)
				{
					bilanganPrima = 0;
					break;
				}
			}
			if (bilanganPrima == 1)
			{
				cout << k << " ";
			}
		}

		break;
	}
	default:
		cout << "Maaf, angka yang anda input tidak valid. Silahkan coba lagi.";
		break;
	}

	return 0;
}
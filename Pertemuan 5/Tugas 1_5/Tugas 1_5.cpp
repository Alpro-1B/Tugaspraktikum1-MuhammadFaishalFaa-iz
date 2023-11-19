#include <iostream>
using namespace std;

/*Membuat function untuk memberitahu program terdapat function bernama 'memunculkanInteger' agar program tidak kebingungan.*/
void memunculkanInteger(int masukkanPengguna);

int main()
{

	/*Membuat variabel 'userOption' untuk mengambil nilai dari user dalam memilih program.*/
	int userOption;

	cout << "Program ini dibuat untuk mencari Bilangan Ganjil, Bilangan Genap, dan Bilangan Prima" << endl << endl;
	cout << "Tentukan bilangan mana yang ingin anda cari : " << endl;
	cout << "1. Bilangan Ganjil." << endl;
	cout << "2. Billangan Genap." << endl;
	cout << "3. Bilangan Prima." << endl;
	cout << "Bilangan yang anda pilih : ";
	cin >> userOption; /*Memasukkan angka pilihan pengguna kedalam variabel 'userOption'*/
	cout << endl;

	memunculkanInteger(userOption);

	return 0;
}



void memunculkanInteger(int masukkanPengguna)
{


	int batas;

	switch (masukkanPengguna)
	{
	case 1:
	{

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
	}
}
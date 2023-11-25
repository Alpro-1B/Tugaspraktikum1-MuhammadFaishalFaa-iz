#include <iostream>
using namespace std;

int main()
{
	int userOption;

	cout << "Program ini dibuat untuk mencari nilai tertinggi dalam Array." << endl << endl;
	cout << "Tentukan Array berapa dimensi yang diinginkan." << endl;
	cout << "1. Array 2 Dimensi." << endl;
	cout << "2. Array 3 Dimensi." << endl;
	cout << "Pilihan : ";
	cin >> userOption;

	switch (userOption)
	{
		case 1:
		{
			cout << "Array 2 Dimensi." << endl;
			// Inisialisasi variabel untuk menyimpan nilai tertinggi dan indeksnya
			int bil[2][3];
			int nilaiTertinggi = bil[2][3];
			int indexBarisTertinggi = 0;
			int indexKolomTertinggi = 0;
			int a = 0;

			cout << "Masukkan 6 bilangan. " << endl;
			// Memasukkan nilai
			for (int i = 0; i < 2; ++i)
			{
				for (int j = 0; j < 3; ++j)
				{
					cout << "Masukan Bilangan ke - " << a << " :";
					cin >> bil[i][j];
					a++;
				}
			}

			cout << "Bilangan: " << endl;
			//Memunculkan index berdasarkan urutan nilai
			for (int i = 0; i < 2; ++i)
			{
				for (int j = 0; j < 3; ++j)
				{
					cout << "index[" << i << "][" << j << "]: " << bil[i][j] << endl;
				}
			}

			// Loop untuk memeriksa setiap elemen array
			for (int i = 0; i < 2; ++i)
			{
				for (int j = 0; j < 3; ++j)
				{
					// Jika nilai elemen saat ini lebih besar dari nilai tertinggi yang disimpan
					if (bil[i][j] > nilaiTertinggi)
					{
						nilaiTertinggi = bil[i][j];
						indexBarisTertinggi = i;
						indexKolomTertinggi = j;
					}
				}
			}

			// Menampilkan hasil
			cout << "Nilai tertinggi: " << nilaiTertinggi << endl;
			cout << "Indeks baris nilai tertinggi: " << indexBarisTertinggi << endl;
			cout << "Indeks kolom nilai tertinggi: " << indexKolomTertinggi << endl;

			break;
		}

		case 2:
		{
			cout << "Array 3 Dimensi." << endl;
			// Inisialisasi variabel untuk menyimpan nilai tertinggi dan indeksnya
			int bil[2][3][2];
			int nilaiTertinggi = bil[0][0][0];
			int indexDimensi1Tertinggi = 0;
			int indexDimensi2Tertinggi = 0;
			int indexDimensi3Tertinggi = 0;
			int a = 0;

			cout << "Masukkan 12 bilangan. " << endl;
			//Masukkan Nilai
			for (int i = 0; i < 2; ++i)
			{
				for (int j = 0; j < 3; ++j)
				{
					for (int k = 0; k < 2; ++k)
					{
						cout << "Masukan Bilangan ke - " << a << " :";
						cin >> bil[i][j][k];
						a++;
					}
				}
			}

			cout << "Bilangan: " << endl;
			//Memunculkan index berdasarkan urutan nilai
			for (int i = 0; i < 2; ++i)
			{
				for (int j = 0; j < 3; ++j)
				{
					for (int k = 0; k < 2; ++k)
					{
						cout << "index[" << i << "][" << j << "][" << k << "]: " << bil[i][j][k] << endl;
					}
				}
			}

			// Loop untuk memeriksa setiap elemen array
			for (int i = 0; i < 2; ++i)
			{
				for (int j = 0; j < 3; ++j)
				{
					for (int k = 0; k < 2; ++k)
					{
						// Jika nilai elemen saat ini lebih besar dari nilai tertinggi yang disimpan
						if (bil[i][j][k] > nilaiTertinggi)
						{
							nilaiTertinggi = bil[i][j][k];
							indexDimensi1Tertinggi = i;
							indexDimensi2Tertinggi = j;
							indexDimensi3Tertinggi = k;
						}
					}
				}
			}

			// Menampilkan hasil
			cout << "Nilai tertinggi: " << nilaiTertinggi << endl;
			cout << "Indeks dimensi 1 nilai tertinggi: " << indexDimensi1Tertinggi << endl;
			cout << "Indeks dimensi 2 nilai tertinggi: " << indexDimensi2Tertinggi << endl;
			cout << "Indeks dimensi 3 nilai tertinggi: " << indexDimensi3Tertinggi << endl;

			break;
		}
	}
	return 0;
}
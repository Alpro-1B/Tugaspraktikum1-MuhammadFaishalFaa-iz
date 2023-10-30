#include <iostream>

using namespace std;
int main() {

	float number1, number2, number3;

	cout << "Selamat datang!! Kali ini kita akan mencari angka terbesar." << endl;
	cout << "Masukkan angka pertama : ";
	cin >> number1;
	cout << "Masukkan angka kedua : ";
	cin >> number2;
	cout << "Masukkan angka ketiga : ";
	cin >> number3;
	cout << endl << endl;
	cout << "Hasil dari input diata : " << endl;

	if (number1 > number2 && number1 > number3)
	{
		cout << "Angka terbesar ialah : " << number1 << endl;

		if (number2 > number3)
		{
			cout << "Angka terbesar kedua ialah : " << number2 << endl;
			cout << "Angka terbesar ketiga ialah : " << number3 << endl;
		}
		if (number3 > number2)
		{
			cout << "Angka terbesar kedua ialah : " << number3 << endl;
			cout << "Angka terbesar ketiga ialah : " << number2 << endl;
		}
	}
	else if (number2 > number1 && number2 > number3)
	{
		cout << "Angka terbesar ialah : " << number2 << endl;

		if (number1 > number3)
		{
			cout << "Angka terbesar kedua ialah : " << number1 << endl;
			cout << "Angka terbesar ketiga ialah : " << number3 << endl;
		}
		if (number3 > number1)
		{
			cout << "Angka terbesar kedua ialah : " << number3 << endl;
			cout << "Angka terbesar ketiga ialah : " << number1 << endl;
		}
	}
	else if (number3 > number1 && number3 > number2)
	{
		cout << "Angka terbesar ialah : " << number3 << endl;

		if (number1 > number2)
		{
			cout << "Angka terbesar kedua ialah : " << number1 << endl;
			cout << "Angka terbesar ketiga ialah : " << number2 << endl;
		}
		if (number2 > number1)
		{
			cout << "Angka terbesar kedua ialah : " << number2 << endl;
			cout << "Angka terbesar ketiga ialah : " << number1 << endl;
		}
	}
	else
	{
		cout << "Angka yang anda masukkan tidak valid" << endl;
	}

	return 0;
}
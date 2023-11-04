#include <iostream>

using namespace std;
int main() {
	int userOption;
	float panjang, lebar, tinggi, alas, sisi, luas;

	cout << "Program ini dibuat untuk mencari luas persegi, persegi panjang, dan segitiga." << endl << endl;
	cout << "Tentukan bangun datar yang ingin anda hitung." << endl;
	cout << "1. Persegi." << endl;
	cout << "2. Persegi Panjang." << endl;
	cout << "3. Segitiga." << endl;
	cout << "Bangun datar yang ingin anda hitung : ";
	cin >> userOption;

	switch (userOption)
	{
	case 1:
		cout << "Bangun datar yang anda cari adalah Persegi." << endl;
		cout << "Masukkan nilai sisi : ";
		cin >> sisi;
		luas = sisi * sisi;
		cout << "Luas dari Persegi yaitu : " << luas << " cm" << endl << endl;
		cout << "Program mencari luas Persegi selesai.";
		break;
	case 2:
		cout << "Bangun datar yang anda cari adalah Persegi Panjang." << endl;
		cout << "Masukkan nilai panjang : ";
		cin >> panjang;
		cout << "Masukkan nilai lebar : ";
		cin >> lebar;
		luas = panjang * lebar;
		cout << "Luas dari Persegi Panjang yaitu : " << luas << " cm" << endl << endl;
		cout << "Program mencari luas Persegi Panjang selesai.";
		break;
	case 3:
		cout << "Bangun datar yang anda cari adalah Segitiga." << endl;
		cout << "Masukkan nilai alas : ";
		cin >> alas;
		cout << "Masukkan nilai tinggi : ";
		cin >> tinggi;
		luas = (alas * tinggi)/2;
		cout << "Luas dari Segitiga yaitu : " << luas << " cm" << endl << endl;
		cout << "Program mencari luas Persegi Panjang selesai.";
		break;
	default:
		cout << "Maaf, angka yang anda input tidak valid. Silahkan coba lagi.";
		break;
	}

	return 0;
}
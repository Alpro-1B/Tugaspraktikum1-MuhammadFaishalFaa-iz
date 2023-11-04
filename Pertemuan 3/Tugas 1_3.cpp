#include <iostream>

using namespace std;
int main() {

	string nama, Kelas;
	long long NPM;
	int score;

	cout << "Silahkan isi data diri anda terlebih dahulu!" << endl << endl;
	cout << "Nama : ";
	cin >> nama;
	cout << "NPM : ";
	cin >> NPM;
	cout << "Kelas : ";
	cin >> Kelas;
	cout << "Nilai : ";
	cin >> score;

	if (score >= 90 && score <= 100)
	{
		cout << "Selamat! Anda mendapatkan nilai A." << endl;
	}
	else if (score >= 80 && score <= 89)
	{
		cout << "Anda mendapatkan nilai B." << endl;
	}
	else if (score >= 70 && score <= 79)
	{
		cout << "Anda mendapatkan nilai C." << endl;
	}
	else if (score >= 60 && score <= 69)
	{
		cout << "Anda mendapatkan nilai D." << endl;
	}
	else if (score >= 0 && score <= 59)
	{
		cout << "Anda mendapatkan nilai E." << endl;
	}
	else
	{
		cout << "Mohon maaf, nilai yang anda masukkan tidak valid. Nilai harus berada dalam rentang 0-100." << endl;
	}

	return 0;
}
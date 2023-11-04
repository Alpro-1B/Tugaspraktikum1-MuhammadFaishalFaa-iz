#include <iostream>
using namespace std;

int main()
{
	int n, m, hasil;

	cout << "Selamat datang !!" << endl << "Kali ini kita akan membagikan ayam Pak Tatang ke teman - temannya dengan menyisakan beberapa ekor untuk dirinya sendiri!!" << endl;
	cout << "Masukkan banyak ekor ayam milik Pak Tatang : ";
	cin >> n;
	cout << "Masukkan banyak teman Pak Tatang : ";
	cin >> m;
	hasil = n % m;
	cout << "Sisa ayam untuk Pak Tatang : " << hasil << endl;

	return 0;
}
#include <iostream>
using namespace std;

void Fibonacci(int angka);

int main()
{
    cout << "Program menghitung deret Fibonacci. " << endl << endl;

    int n; /*Buat variabel "n"*/
    cout << "Masukkan jumlah angka: ";
    cin >> n; /*Masukkan variabel "n"*/

    Fibonacci(n);

    return 0;
}

void Fibonacci(int angka)
{
    int n;
    int a = 0, b = 1; /*Buat variabel untuk "a = 0", dan "b = 1"*/
    int c; /*Buat variabel "c"*/

    if (angka <= 0)
    {
        do
        {
            cout << "Nilai yang anda masukkan harus bernilai positif." << endl;
            cout << "Masukkan kembali jumlah angka : ";
            cin >> n;
        } while (angka > 0);
        {

            for (int i = 0; i < n; i++)
            {
                if (i < 2) {
                    c = i;
                }
                else {
                    c = a + b;
                    a = b;
                    b = c;
                }
                cout << c << " ";
            }

            cout << endl;
        }
    }
}
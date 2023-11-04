#include <iostream>
using namespace std;

int main() {
    cout << "Program menghitung deret Fibonacci :)" << endl << endl;

    int n; /*Buat variabel "n"*/
    cout << "Masukkan jumlah angka: ";
    cin >> n; /*Masukkan variabel "n"*/

    int a = 0, b = 1; /*Buat variabel untuk "a = 0", dan "b = 1"*/
    int c; /*Buat variabel "c"*/

    cout << "Deret Fibonacci ke- " << n << " angka: ";

    for (int i = 0; i < n; i++) {
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

    return 0;
}
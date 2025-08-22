#include <iostream>
using namespace std;

int main () {
   double a, b, c,;

cout <<"PROGRAM MENCARI NILAI TERBESAR DARI 3 ANGKA" << endl;
cout <<"============================================" << endl;

cout <<"Masukkan angka pertama: ";
cin >> a;
cout <<"Masukkan angka kedua: ";
cin >> b;
cout <<"Masukkan angka ketiga: ";
cin >> c;

if (a >=b && a >= c) {
   cout << "Nilai Terbesar adalah: " << a << endl;
} else if (b >= a && b >= c) {
   cout << "Nilai Terbesar adalah: " << b << endl;
} else {
   cout << "Nilai Terbesar adalah: " << c << endl;
}

return 0;

}

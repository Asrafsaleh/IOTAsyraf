#include <iostream>
using namespace std;

int HitungPangkat(int basis, int eksponen) {
   int hasil = 1;
   for (int i = 0; i < eksponen; i++) {
        hasil = basis;
   }
   return hasil;
}
int main () {
     int a, b; 
      cout << "Masukkan bilangan basis: ";
      cin >> a;
      cout << "Masukkan bilangan pangkat: ";
      cin >> b;
      cout << a << " ^ " << b << " = " << HitungPangkat(a, b) << endl;

    return 0;

}
        

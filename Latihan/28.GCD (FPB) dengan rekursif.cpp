#include <iostream>
using namespace std;

int gcd(int a, int b) {
   if (b == 0)
      return a;
   else 
       return gcd(b, a % b);

}

int main() {
   int x, y;

   cout << "Masukkan bilangan pertama";
   cin >> x;
   cout << "Masukkan bilangan kedua";
   cin >> y;

  cout << "GCD (FPB) dari" << x << " dan " << y << " adalah: " << gcd(x,y) << endl;

  return 0;

}

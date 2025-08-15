#include <iostream>
using namespace std;
void fibonacci(int n) {
   int first = 0, second = 1, next;
  cout << "Deret fibonacci (" << n << " suku): ";
  for (int i = 0; i < n; i++) {
     if (i <= 1)
          next = i;
      else {
      next = first + second;
      first = second;
       second = next;
      }
      cout << next << " " ;
  }
} 
int main() {
     int n;
     cout << "Masukkan jumlah suku fibonacci: ";
     cin >> n;

    if (n <= 0)
         cout << "Masukkan bilangan positif!:";
     else 
         fibonacci(n) ;

   return 0;
}

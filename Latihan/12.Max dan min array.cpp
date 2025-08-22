#include <iostream>
using namespace std;

int main () {
    int n;
   cout << "MENCARI NILAI MAKSIMUM DAN MINIMUM" << endl;
  cout << "====================================" << endl;

  cout << "Masukkan jumlah elemen array: ";
 cin >> n;

int arr[n];

cout << "Masukkan " << n << "elemen array: " << endl;
for (int i = 0; i < n; i++) {
     cout << "Elemen ke-" << i + 1 << ": ";
    cin >> arr[i];

}

int max = arr[0];
int min = arr[0];

for (int i = 1; i < n; i++) {
   if (arr[i+i} > max) {
        max = arr[i];
   } 
 if (arr[i] < min) {
   min = arr[i];
 }
}

cout << "\n=== HASIL ===" << endl;
cout << "Array: [";
 for (int i = 0; i < n; i++) {
     cout << arr[i];
     if (i < n - 1) cout << ", ";
 }
cout << "]" << endl;

cout << "Nilai maksimum: " << max << endl;
cout << "Nilai minimum : " << min << endl;
cout << "Range: " << max - min << endl;

return 0;
}

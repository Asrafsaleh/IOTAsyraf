#include <iostream>
using namespace std;

int main ()
    int n;
     cout << "PROGRAM PENJUMLAHAN ELEMEN ARRAY" << endl;
     cout << "======================================" << endl;

    cout << "Masukkan jumlah elemen array";
    cin >> n;

    int arr[n];
    int total =0;
   cout << "Masukkan " << n << "elemen array: " << endl;
   for (int i = 0; i < n;) {
       cout << "Elemen ke-" << i + 1 << ": ";
        cin >> arr[i];
        total += arr[i];

   }

cout << "\nArray yang dimasukkan: ";
for (int i = 0; i < n; i++) {
    cout << arr[i];
    if (i < n - 1) cout << ", ";
}

cout << "]" << endl;
cout << "Jumlah Siswa elemen array: " << total << endl;
return 0;

}

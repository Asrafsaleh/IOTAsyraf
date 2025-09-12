#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void tampilkanArray(const vector<int>& arr, const string& judul) {
  cout << judul << ": ";
  for (int num : arr) {
      cout << num << " ";
  }
  cout << endl;
}

int linearSearch(const vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
          return i;
        }
    }
    return -1;
}

int binarySearch(const vector<int>& arr, int target) {
  int kiri = 0;
  int kanan = arr.size() - 1;

  while (kiri <= kanan) {
        int tengah = kiri + (kanan - kiri) /2;

        if (arr[tengah] == target) {
           return tengah;
        }
        else if (arr[tengah] < target) {
             kiri = tengah +1;
        }
        else {
             kanan = tengah -1;
        }
      }

  return -1;
}

int main() {
    vector<int> data = {64, 34, 25, 12, 22, 11, 90, 88, 76, 50};
    vector<int> dataTerurut = data;
    sort(dataTerurut.begin(), dataTerurut.end());

    int pilihan, target, hasil;

    cout << "=========================================" << endl;
    cout << "    PROGRAM LINEAR SEARCH & BINARY SEARCH" << endl;
    cout << "=========================================" << endl;

    tampilkanArray(data, "Data asli");
    tampilkanArray(dataTerurut, "Data terurut (untuk Binary Search)");

    do {
       cout << "\n== MENU PILIHAN ===" << endl;
       cout << "1. Linear Search" << endl;
       cout << "2. Binary Search" << endl;
       cout << "3. Keluar" << endl;
       cout << "Pilihan Anda (1-3): ";
       cin >> pilihan;

       if (pilihan == 3) {
          cout << "Terima kasih!" << endl;
          break;
       }

       if (pilihan < 1 || pilihan > 3) {
          cout << "Pilihan tidak valid!" << endl;
          continue;
       }

       cout << "Masukkan angka yang dicari: ";
       cin >> target;

       switch (pilihan) {
           case 1:
               hasil = linearSearch(data, target);
               cout << "\n=== HASIL LINEAR SEARCH ===" << endl;
               if (hasil != -1) {
                  cout << "Angka " << target << " ditemukan pada index: " << hasil << endl;
                  cout << "Langkah pencarian: Mencari satu per satu dari awal hingga akhir" << endl;
               } else {
                  cout << "Angka " << target << " tidak ditemukan dalam array" << endl;
               }
               break;

case 2:
  hasil = binarySearch(dataTerurut, target);
  cout << "\n=== HASIL BINARY SEARCH ===" << endl;
  if (hasil != -1 ) {
     cout << "Angka " << target << " ditemukan pada index: " << hasil << endl;
     cout << "Langkah pencarian: Membagi array menjadi dua bagian berulang kali" << endl;
  } else {
     cout << "Angka " << target << " tidak ditemukan dalam array" << endl;
}
break;
}

cout << "\n=== PERBANDINGAN KOMPLEKSITAS ===" << endl;
cout << "Linear Search: O(n) - Waktu linear" << endl;
cout << "Binary Search: O(log n) - Waktu logaritmik" << endl;
cout << "==================================" << endl;

} while (pilihan !=3);

return 0;
}
   
   
  

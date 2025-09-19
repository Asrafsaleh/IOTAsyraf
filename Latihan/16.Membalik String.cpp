#include <iostream> 
#include <string>
#include <algorithm>
using namespace std;

int main () {
     string teks;
     cout << "Masukkan sebuah string: ";
     getline(cin, teks);
        reverse(teks.begin(), teks.end()); 
     cout << "Hasil string setelah dibalik: " << teks << endl;
    return 0;

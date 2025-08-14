#include <iostream>
using namespace std;
int main() {
    double suhu;
    int pilihan;
    cout << "=== Program Konversi Suhu ===" << endl; 
    cout << "Pilih satuan asal:" << endl;
    cout << "1. Celcius" << endl; 
    cout << "2. Fahrenheit" << endl;
    cout << "3. Kelvin" << endl; 
     cout << "Masukkan pilihan (1-3): ";
    cin >> pilihan; 
    cout <<"Masukkan nilai suhu:";
    cin >> suhu; 
    cout << fixed;
    cout.precision(2);
    switch (pilihan) {
    case 1: //Celcius
    cout << "\nDari Celcius:" << endl;
    cout << "Fahrenheit:" << (suhu * 9/5) + 32 << endl;
    cout << "Kelvin:" << suhu * 273.15 << endl;
    break;  
case 2: //fahrenheit
  cout << "\nDari Fahrenheit:" << endl;
  cout << "Celcius: " << (suhu - 32) * 5/9 << endl;
  cout << "Kelvin: " <<  (suhu - 32) * 5/9 + 273.15 << endl;
  break;
case 3: //Kelvin
  cout << "\nDari Kelvin:" << endl;
  cout << "Celcius: " << suhu - 273.15 << endl;
  cout << "Fahrenheit: " << (suhu -273.15) * 9/5 + 32 << endl;
  break;
default:
  cout << "Pilihan tidak valid" << endl;
}

return 0;
}
    

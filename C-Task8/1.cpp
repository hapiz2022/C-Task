#include <iostream>

using namespace std;

int main() {
  float a, b, hasil;
  char aritmatika;

  cout << "              Calculator Sederhana" << endl;
  cout << "-------------------------------------------------" << endl;
  cout << "Masukkan Nilai pertama : ";
  cin >> a;
  cout << "Masukkan operator aritmatika + , - , / , x";
  cin >> aritmatika;
  cout << "Masukkan Nilai kedua : ";
  cin >> b;
  switch (aritmatika) {
  case '+':
    hasil = a + b;
    cout << "Hasil Perhitungan adalah : " << hasil << endl;
    break;
  case '-':
    hasil = a - b;
    cout << "Hasil Perhitungan Adalah : " << hasil << endl;
    break;
  case '/':
    hasil = a / b;
    cout << "Hasil Perhitungan Adalah : " << hasil << endl;
    break;
  case 'x':
    hasil = a * b;
    cout << "Hasil Perhitungan Adalah : " << hasil << endl;
  default:
    cout << "Perhitungan tidak ditemukan " << endl;
  }
  getchar();
  return 0;
}
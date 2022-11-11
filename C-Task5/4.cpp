#include <iostream>

using namespace std;

int main() {
  cout << "  Program C++ Cek Bilangan Prima  " << endl;
  cout << "==================================" << endl;
  cout << endl;

  int n, i;
  bool angka_prima = true;

  cout << "Input angka: ";
  cin >> n;
  
  if (n == 0 || n == 1) {
    angka_prima = false;
  } else {
    for (i = 2; i <= n / 2; i++) {
      if (n % i == 0) {
        angka_prima = false;
        break;
      }
    }
  }

  cout << endl;
  if (angka_prima)
    cout << n << " Termasuk bilangan PRIMA";
  else
    cout << n << " Bukan termasuk bilangan PRIMA";

  cout << endl;
  return 0;
}
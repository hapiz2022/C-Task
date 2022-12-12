#include <iostream>
using namespace std;

int main() {
  int bilangan[100], input, cari, jumlah = 0, i;

  cout << "Masukkan jumlah bilangan = ";
  cin >> input;
  cout << endl;
  for (i = 0; i < input; i++) {
    cout << "Masukkan Indeks ke-" << i << " : ";
    cin >> bilangan[i];
  }
  cout << endl;
  cout << "Deretan bilangan adalah = ";
  for (i = 0; i < input; i++) {
    cout << bilangan[i] << " ";
  }
  cout << endl;
  cout << "\nMasukkan bilangan yang akan dicari : ";
  cin >> cari;

  for (i = 0; i < input; i++) {
    if (bilangan[i] == cari) {
      jumlah++;
    }
  }
  cout << "Bilangan " << cari << " ditemukan sebanyak " << jumlah << endl;

  bool found = false;
  for (i = 0; i < input; i++) {
    if (bilangan[i] == cari) {
      cout << "Pada posisi ke = " << i;
      found = true;
      break;
    }
  }
  if (!found) {
    cout << "Bilangan tidak ditemukan" << endl;
  }
  
  return 0;
}

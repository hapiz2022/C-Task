#include <iostream>
using namespace std;

int pangkat(int x, int y) {
  if (y == 0) {
    return 1;
  } else {
    return x * pangkat(x, y - 1);
  }
}

int main() {
  int x, y;
  
  cout << "=============================================" << endl;
  cout << "  MENGHITUNG PANGKAT DENGAN FUNGSI REKURSIF  " << endl;
  cout << "=============================================" << endl;
  cout << "Masukan Nilai X = ";
  cin >> x;
  cout << "Masukan Nilai Y = ";
  cin >> y;
  cout << endl;
  cout << x << " Dipangkatkan " << y << " = " << pangkat(x, y) << endl;

  system("pause");
  return 0;
}
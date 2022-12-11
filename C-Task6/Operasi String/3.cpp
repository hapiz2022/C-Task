
#include <iostream>

using namespace std;

int main() {
  char a1[20];
  char a2[20];
;
  cout << "Masukkan Kata - 1 = ";
  cin >> a1;
  cout << "Masukkan Kata - 2 = ";
  cin >> a2;
  
  strcat(a1, a2);
  
  cout << endl;
  cout << "Hasil Penggabungannya " << a1;
  
  cout << endl;
  system("pause");
  
  return 0;
}
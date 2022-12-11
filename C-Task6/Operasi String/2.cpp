#include <iostream>
using namespace std;

int main() {
  char kalimat[100] = "KAMPUS UNGU INSTITUT BISNIS DAN INFORMATIKA KESATUAN", teks_baru[100];
		
  cout << "Kalimat Yang Ingin Dirubah: " << kalimat << endl;
  // cin.getline(kalimat, sizeof(kalimat));
  int x = strlen(kalimat);
  cout << "Kalimat Setelah Dirubah: ";
  for (int i = x - 1; i >= 0; i--) {

    teks_baru[i] = tolower(kalimat[i]);
    cout << teks_baru[i];
	
  }
  cout << endl;
  system("pause");
  
  return 0;
}
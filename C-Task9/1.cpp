#include <iostream>                                                    // standart library pada c++
using namespace std;                                                   // program akan menggunakan namespace std

int hargaSetelahPajak(int hargaDasar) {                                // fungi hargaSetelahPajak yang akan mengambil argumen int
  return hargaDasar + (hargaDasar * 10 / 100);                         // kalkulasi hargasetelah pajak
}

int main() {
  int hargaMawar = 10000;                                              // deklarasi hargaMawar dengan tipe data int
  int hargaFinalMawar = hargaSetelahPajak(hargaMawar);                 // baris ini mendeklarasikan sebuah variabel bernama hargaFinalMawar dan menginisialisasinya dengan harga akhir bunga mawar. Harga akhir dihitung dengan memanggil fungsi hargaSetelahPajak dan meneruskan nilai hargaMawar sebagai argumen.
  cout << "Harga mawar 1 tangkai Rp." << hargaFinalMawar << endl;      // print output harga final
  return 0;                                                            // mengembalikan 0 dari fungsi utama.
}

#include <iostream>
using namespace std;

int main (){
  int *P;
  P=new int; // Inisialisasi variable P dengan tipe data Int

  *P=100; // merubah nilai variable P menjadi 100

  cout<<"Nilai *P : "<<*P<<endl; // Memunculkan output nilai pointer P
  delete P; // Membebaskan atau menghapus nilai pada variable P
  return 0; // Selesai eksekusi dengan exit code 0
 }
#include <iostream>
using namespace std;

int main(){
  string x;
   
  cout << "====================================" << endl;
  cout << " Program Menghitung Panjang Kalimat " << endl;
  cout << "====================================" << endl;
  cout << "input kalimat =";
  cin >> x;
  
  cout << endl;
  cout <<"Jumlah Huruf = " << x.length();
  cout << endl;
  
  system("pause");
  
  return 0;
  }

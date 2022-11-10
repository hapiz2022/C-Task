#include <iostream>
 
using namespace std;
 
int main(){
  cout << "##  Program C++ Cari Nilai Terbesar  ##" << endl;
  cout << "=======================================" << endl;
  cout << endl;
  int nilai[10] = {23, 6, 89,12, 45, 67, 9, 90,54, 30};
  int i, max_num, min_num;
  max_num = nilai[0];
  min_num = nilai[0];
  for(i = 0; i < 10; i++){
    if(nilai[i] > max_num){
      max_num = nilai[i];
    } else if (nilai[i] < min_num) {
      min_num = nilai[i];
    }
  }
  cout  << "Nilai Terbesar Adalah: " << max_num << endl;
  cout  << "Nilai Terkecil Adalah: " << min_num << endl;
  return 0;
}
//…programmenghitunghargatotal
#include <iostream>
using namespace std;
#define harga 4500.02 //…menentukan harga dengan definevoid main()

int main(){  
    float jumlah,total;
    
    cout << "Masukan jumlah barang = ";
    cin  >> jumlah; total=harga*jumlah;

    cout << "\nYang harus di bayar = " << total;
    return 0;
}
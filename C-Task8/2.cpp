#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  int i,jenispotong,jumlahpesanan;
  char loop,kodepotong[6]={'d','D','p','P','s','S'};
  double fee;
  int jumlahbayar,total,hargasatuan[6],banyakpotong[6],jumlahharga[6];
  	cout << "GEROBAK FRIED CHICKEN" << endl;
    cout << "--------------------------" <<endl;
    cout << "Kode\t Jenis\t Harga" << endl;
    cout << "--------------------------" <<endl;
    cout << "D\t Dada\t Rp. 2500" << endl;
    cout << "P\t Paha\t Rp. 2000" << endl;
    cout << "S\t Sayap\t Rp. 1500" << endl;
    cout << "--------------------------" << endl;
	do {
  cout<< "Banyak Jenis : ";
  cin >> jumlahpesanan;
  cout << endl;
  for (i=1; i<=jumlahpesanan; i++){
    cout << "Jenis Ke - : "<<i<<endl;
    cout << endl;
    cout << "Jenis Potong d/p/s : ";
    cin >> kodepotong[i];
         if (kodepotong[i]=='d'||kodepotong[i]=='D'){
         	cout <<"Jenis : Dada"<<endl;
         	hargasatuan[i]=2500;
		 } else if(kodepotong[i]=='p'||kodepotong[i]=='P'){
         	cout <<"Jenis : Paha"<<endl;
         	hargasatuan[i]=2000;
         } else if(kodepotong[i]=='s'||kodepotong[i]=='S'){
         	cout <<"Jenis : Sayap"<<endl;
         	hargasatuan[i]=1500;
         } else {
         	cout <<"Kode yang anda masukkan salah";break;
		 }
    cout <<"Banyak Potong : ";
    cin >> banyakpotong[i];
    cout << endl;
    	jumlahharga[i]=hargasatuan[i]*banyakpotong[i];
		jumlahbayar+=jumlahharga[i];
	}
  cout << "\t Gerobak Fried Chicken"<<endl;
  cout << "-------------------------------------";
  cout <<endl;
  cout << "Nomor\t Jenis\t Harga\t Banyak\t Jumlah";
  cout <<endl;
  cout << "    \t Potong\t Satuan\t Beli\t Harga";
  cout <<endl;
  cout <<"---------------------------------------";
  cout <<endl;
  for (i=1; i<=jumlahpesanan; i++)
  {
    for (i=1; i<=jumlahpesanan; i++)
  {
      cout <<setiosflags(ios::left)<<i;
      cout <<" ";
      cout <<'\t'<<"   "<<kodepotong[i];
      cout <<'\t'<<"   "<<hargasatuan[i];
      cout <<'\t'<<"   "<<banyakpotong[i];
      cout <<'\t'<<" "<<jumlahharga[i]<<endl;
      
    }
    cout <<"---------------------------------------"<<endl;
    fee=0.10*jumlahbayar;
    total=fee+jumlahbayar;
	cout <<"\t\t      Jumlah :"<<'\t'<<jumlahbayar<<endl;
	cout <<"\t\t   Pajak 10% :"<<'\t'<<fee<<endl;
	cout <<"\t\t Total bayar :"<<'\t'<<total;
	
	}
	cout << endl;
	cout << endl;
	  cout <<"Apakah anda ingin memesan lagi? (Y/N) :";
  cin >>loop;
  } while (loop=='Y');
  if (loop=='N'){
  cout <<"Terima Kasih dan Selamat Menikmati"<<endl;}
  getchar();
  return 0;


}
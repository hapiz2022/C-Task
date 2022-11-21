#include <iostream>
using namespace std;

int main() {
	int order, nomor;
	string penghuni[31], nama;
	char ulang;
awal:
	system("CLS");
	cout << "===============================================" << endl;
	cout << "                RESERVASI WISMA                " << endl;
	cout << "===============================================" << endl;

	cout << "Masukkan Jumlah Kamar Yang Dipesan : ";
	cin >> order;
	cout << endl;
	for (int i = 0; i < 11; i++) {
		string penda = "Rombongan Pendaki";
		penghuni[i] = penda;
	}
	for (int i = 21; i <= 25; i++) {
		string penda = "Rombongan Keluarga";
		penghuni[i] = penda;
	}
	for (int i = 0; i < order; i++) {
		cout << "Nomor Kamar : ";
		cin >> nomor;
		if (penghuni[nomor].empty() == 0) {
			cout << "\nKamar Tidak Tersedia!!!";
			break;
		}
		cout << "Nama Penghuni : ";
		cin >> nama;
		penghuni[nomor] = nama;
	}
	cout << endl;
	cout << "===============================================" << endl;
	cout << "   Apakah anda ingin memesan kamar lagi ? Y/T  ";
	cin >> ulang;
	cout << endl;
	if (ulang == 'Y' || ulang == 'y')
		goto awal;
	else if (ulang == 'T' || ulang == 't')
		goto akhir;

akhir:
	system("CLS");
	cout << "===============================================" << endl;
	cout << "                  Daftar Tamu                  " << endl;
	cout << "===============================================" << endl;
	for (int i = 1; i <= 30; i++) {
		cout << "Kamar Ke - " << i << ": " << penghuni[i] << endl;
	}

	system("pause");
	return 0;
}

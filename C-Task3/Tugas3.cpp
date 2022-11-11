#include <iostream>

using namespace std;

int main() {
   float r, t, lT, vT, lL;
   float phi = 3.14;

   cout << "Menghitung Luas Lingkaran & Volume Tabung" << endl;
   cout << endl;
   cout << "Masukan Jari-jari : ";
   cin  >> r;
   cout << "Masukan Tinggi    : ";
   cin >> t;

   lT = (2 * phi * r * (r + t));
   vT = (phi * t * (r * r));
   lL = phi * r * r;

   cout << endl;
   cout << "Luas Lingkaran	: " << lL << endl;
   cout << "Luas Tabung	: " << lT << endl;
   cout << "Volume Tabung	: " << vT << endl;
}
#include <iostream>
using namespace std;

int main(){
	int *bilP = new int;
  cout<< *bilP <<" Awal " << endl;
	cout << "Masukan Bilangan : ";
	cin >> *bilP;
	cout << endl;

	if (*bilP%2 == 0){
		cout<< *bilP <<" Adalah bilangan genap" << endl;
	}else {
		cout<< *bilP <<" Adalah bilangan ganjil" << endl;	
	}
}
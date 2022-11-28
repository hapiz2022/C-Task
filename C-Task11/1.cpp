#include <iostream>
using namespace std;

int main(){
	int *bilP = new int;
  
	cout << "Masukan Bilangan : ";
	cin >> *bilP;
	cout << endl;
  
  	*bilP = *bilP%2;

	if (*bilP == 0){
		cout<< " Genap " << endl;
	}else {
		cout<< " Ganjil " << endl;	
	}
}

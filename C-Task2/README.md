# 1. error: expected ';' before '}' 
	kurangnya penulisan ; pada akhir baris di setiap penulisan kode yang menandakan akhir dari setiap baris
	Contoh :
		#include <iostream>
		using namespace std;
		
		int main()
		{
			int x = 10;
			int y = 15;
			
			cout << " "<< (x, y) // line errror
		}	
	
# 2. undefined reference to `main'
	penulisan nama function terdapat huruf capital, yang seharusnya semua hurufnya lowercase
	contoh :
	#include <bits/stdc++.h>
	using namespace std;
	
	int Main() // Line error
	{
		int a = 10;
		cout << " "<< a;
		return 0;
	}

# 3. error: '::main' must return 'int'
	terdapat perbedaan type data pada fn dan dalam fn, yang seharusnya memiliki type data yang sama 
	contoh ; 
		#include <iostream>
		using namespace std;
		
		void main() // Line error
		{
			int x = 10;
			int y = 15;
			
			cout << " "<< (x+y);
			return 0;
		}	
	
# 4. error: 'x' was not declared in this scope
	jika memberikan nilai ke variable tanpa mendefinisikan tipe data variable maka akan terjadi error
	contoh ;
		#include <iostream>
		using namespace std;
		
		int main()
		{
			x = 10;  // line errror
			
			cout << " "<< x;
		}	

# 5. error: expected unqualified-id before numeric constant
	penulisan character yang salah pada Line error yang seharusnya menggunakan .

	contoh ;
		#include <iostream>
		using namespace std;
		
		int main() 
		{
			int x = 10;
			int y = 15,4; // Line error
			
			cout << (x+y);
			return 0;
		}	







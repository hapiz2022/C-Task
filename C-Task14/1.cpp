#include <iostream>
#define maxstack 7	// Mendeklarasi maxstack dengan nilai 7
using namespace std;// merupakan direktif yang digunakan untuk memberi tahu compiler untuk menggunakan namespace std.  kita dapat mengakses semua simbol yang ada di dalam namespace std tanpa harus menyertakan prefix std:: pada setiap simbol tersebut. 

struct STACK {		// mendeklarasikan sebuah struct bernama STACK yang memiliki dua field
  int s[7];			// Deklarasi array 's' dengan ukuran 7 dengan tipe data int
  int top;			// Deklarasi variable top dengan tipe data int
};
struct STACK st;	// Struct STACK juga mendeklarasikan variabel global bernama st yang merupakan instance dari struct tersebut

void push(int data) {						// Fungsi push akan menambahkan elemen ke dalam stack tanpa mengembalikan nilai dengan menggunakan void dan memiliki argument data dengan tipe data int,
  if (st.top == maxstack) {					// Jika nilai top sama dengan maxstack, maka fungsi tersebut akan menampilkan pesan "data penuh".
    cout << "data penuh" << endl;
  } else {									// Jika nilai top masih belum penuh ,
    st.top = st.top + 1;					// maka akan menambahkan nila '1' pada variable 'top'
    st.s[st.top] = data;					// dan menyimpan data ke dalam array 's' pada indeks yang sesuai dengan nilai top.
    cout << "data ditambahkan" << endl;		// dan menampilkan pesan "data ditambahkan".
  }
}
void pop() {								// Fungsi pop akan menghapus elemen teratas dari stack tanpa mengembalikan nilai dengan menggunakan void dengan cara :
  if (st.top == -1) {						// Jika nilai 'top' sama dengan -1,  yang berarti stack kosong.	
    cout << "data kosong" << endl;			// maka akan menampilkan pesan "data kosong".
  } else {									// Jika nilai 'top' tidak sama dengan -1 yang artinya ada isinya didalam stack tersebut
    st.top = st.top - 1;					// maka nilai 'top' akan dikurangi sebesar '1'
    cout << "data dihapus" << endl;			// dan menampilkan pesan "data dihapus".
  }	
}

void show() {												// Fungsi show akan menampilkan semua elemen dalam stack tanpa mengembalikan nilai dengan menggunakan void
  if (st.top == -1) {										// Jika nilai top sama dengan -1,
    cout << "data kosong, tidak ada yang bisa ditampilkan"; // Maka akan menampilkan pesan "data kosong, tidak ada yang bisa ditampilkan".
  } else {													// jika nilai top tidak sama dengan -1, 
    for (int x = 0; x <= st.top; x++) {						// kode akan menjalankan loop for yang akan berjalan sebanyak 'st.top'.
      cout << st.s[x] << "=>";								// menampilkan elemen pada indeks x dari array s, diikuti tanda panah "=>".
    }
    cout << endl;											// Setelah loop selesai, kode akan menampilkan baris baru dengan menggunakan endl.
  
  }
}
int main() {
  st.top = -1;	// nilai top diinisialisasi dengan nilai '-1' untuk menunjukkan bahwa stack kosong.
  push(1);		// memanggil fungsi push untuk menambahkan elemen ke dalam stack dengan nilai 1.
  push(2);		// memanggil fungsi push untuk menambahkan elemen ke dalam stack dengan nilai 2.
  push(3);		// memanggil fungsi push untuk menambahkan elemen ke dalam stack dengan nilai 3.
  push(4);		// memanggil fungsi push untuk menambahkan elemen ke dalam stack dengan nilai 4.
  push(5);		// memanggil fungsi push untuk menambahkan elemen ke dalam stack dengan nilai 5.
  push(6);		// memanggil fungsi push untuk menambahkan elemen ke dalam stack dengan nilai 6.
  push(7);		// memanggil fungsi push untuk menambahkan elemen ke dalam stack dengan nilai 7.
  pop();		// fungsi pop dipanggil sekali untuk menghapus elemen teratas dari stack
  show();		// fungsi show dipanggil untuk menampilkan semua elemen yang ada di dalam stack.
}
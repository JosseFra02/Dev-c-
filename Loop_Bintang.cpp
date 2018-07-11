//Josse Frasetya_20170801016
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int i,j,n,x;
	ulang:	//posisi awal untuk memulai ulang program 
	system("cls");	//untuk menghapus laya / membersihkan layar ketika melakukan pengulangan program
	cout<<("\tJosse Fraseya\n\t20170801016\n\n");		//untuk menampilkan nama pembuat dan nim pembuat program
	cout<<("\t\t\t\t--Program Menampilkan Bentuk dari Bilangan--\n");	//menampilkan tulisan "Program Menampilkan Bentuk dari Bilangan"
	cout<<("Masukan Angka\t:"); cin>>n; //variabel n untuk menampung jumlah baris dari bintang


	for (i=n; i>=1; i--){		//perulangan untuk baris bintang dan spasi pada bagian sisi atas
		for (j=0; j<i; j++){	//perulangan untuk menapilkan bintang pada bagian kiri atas
			cout<<(" *");
		}
		for (x=1; x<=n-i; x++){		//perulangan untuk menampilkan spasi (ruang kosong)
		cout<<(" ");
		}
		for (x=1; x<=n-i; x++){		//perulangan untuk menampilkan spasi (ruang kosong)
		cout<<(" ");
		}
		for (x=1; x<=n-i; x++){		//perulangan untuk menampilkan spasi (ruang kosong)
		cout<<(" ");
		}
		for (x=1; x<=n-i; x++){		//perulangan untuk menampilkan spasi (ruang kosong)
		cout<<(" ");
		}
		for (j=0; j<i; j++){	//perulangan untuk menapilkan bintang pada bagian kanan atas
			cout<<(" *");
		}
		cout<<("\n");
	}


	for (i=1; i<=n; i++){		//perulangan untuk baris bintang dan spasi pada bagian sisi bawah
		for (j=0; j<i; j++){	//perulangan untuk menapilkan bintang pada bagian kiri bawah
			cout<<(" *");
		}
		for (x=1; x<=n-i; x++){		//perulangan untuk menampilkan spasi (ruang kosong)
		cout<<(" ");
		}
		for (x=1; x<=n-i; x++){		//perulangan untuk menampilkan spasi (ruang kosong)
		cout<<(" ");
		}
		for (x=1; x<=n-i; x++){		//perulangan untuk menampilkan spasi (ruang kosong)
		cout<<(" ");
		}
		for (x=1; x<=n-i; x++){		//perulangan untuk menampilkan spasi (ruang kosong)
		cout<<(" ");
		}
		for (j=0; j<i; j++){	//perulangan untuk menapilkan bintang pada bagian kanan bawah
			cout<<(" *");
		}
		cout<<("\n");
	}
	getch();
	goto ulang;	//menuju ulang untuk memulai ulang program 
}

//Josse Frasetya_20170801016
#include <iostream>
#include <conio.h>

using namespace std;

struct mahasiswa{
	int nim, umur;
	char nama[20];
	float ipk;
}mhs;

void tampil(){
	cout<<"\t\t\t---Input---\n\n"
		<<"NIM\t= "<<mhs.nim<<endl
		<<"Nama\t= "<<mhs.nama<<endl
		<<"Umur\t= "<<mhs.umur<<endl
		<<"IPK\t= "<<mhs.ipk;
}

void input(){
	cout<<"\t\t\t---Input---\n\n";
	cout<<"Masukan NIM\t= "<<endl; cin>>mhs.nim;
	cout<<"Masukan Nama\t= "<<endl; cin>>mhs.nama;
	cout<<"Masukan Umur\t= "<<endl; cin>>mhs.umur;
	cout<<"Masukan IPK\t= "<<endl; cin>>mhs.ipk;
}

int main(){
	cout<<"Selamat Datang";
	input();
	
	tampil();
	
	
	getch();
}

#include <iostream>
#include <conio.h>
int main (){
	using namespace std;
	char nama [30];
	char ttl [50];
	char jenis_kelamin [20];
	char tinggi_badan [10];
	char berat_badan [10];
	char kategori [15];
	
	cout<<"\t\t\tFormulir Pendaftaran Kejuaraan Taekwondo\n\n";
	cout<<"Nama Lengkap \t\t\t : ";
	cin.getline(nama,30);
	cout<<"Tempat, Tanggal Lahir \t\t : ";
	cin.getline(ttl,50);
	cout<<"Jenis Kelamin \t\t\t : ";
	cin.getline(jenis_kelamin,20);
	cout<<"Tinggi Badan \t\t\t : ";
	cin.getline(tinggi_badan,10);
	cout<<"Berat Badan \t\t\t : ";
	cin.getline(berat_badan,10);
	cout<<"Kategori (Pomsae/Kyorugi) \t : ";
	cin.getline(kategori,15);
	cout<<"\nTerima kasih Telah Mendaftar, Good Luck..!!";
getch();
}

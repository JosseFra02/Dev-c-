#include <iostream>
#include <conio.h>
using namespace std;
int main (){
int nilai;
cout<<"Input Nilai Matakuliah : ";
cin>>nilai;

if (nilai>= 60){
	cout<<"Selamat anda Telah LULUS Matakuliah ini\n";
}	
else{
cout<<"Tidak Lulus, Selamat Mengulang Matakuliah ini\n";
}
	getch ();
}

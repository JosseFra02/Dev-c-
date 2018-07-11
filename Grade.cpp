#include <iostream>
#include <conio.h>
using namespace std;
int main (){
	int nilai;
	cout<<"Input Nilai Mata Kuliah = ";
	cin>>nilai;
	if (nilai>=85 && nilai <= 100){
		cout<<"Selamat Anda LULUS";
		cout<<"\nGrade A";
	}if (nilai>=75 && nilai < 85){
		cout<<"Selamat Anda LULUS";
		cout<<"\nGrade B";
	}if (nilai>=60 && nilai < 75){
		cout<<"Selamat Anda LULUS";
		cout<<"\nGrade C";
	}if (nilai>=45 && nilai < 60){
		cout<<"Anda GAGAL dan Harus Mengulang";
		cout<<"\nGrade D";
	}if (nilai>=0 && nilai < 45){
		cout<<"Anda GAGAL dan Harus Mengulang";
		cout<<"\nGrade E";
	}if (nilai<0 || nilai>100){
		cout<<"\nInput Nilai Antara 0 - 100";
	}
	
	
getch();	
}

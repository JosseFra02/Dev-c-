//Josse Frasetya_20170801016
#include <iostream>
#include <conio.h>
using namespace std;
int main (){
	int x, y, z; //pendeklarasian variabel x untuk nilai quiz 1, y untuk nilai quiz 2, z untuk nilai quiz 3
	cout<<"\t\t\tNilai Quiz"; //Judul Program Nilai Quiz
	cout<<"\nInput Nilai Quiz 1 = ";
	cin>>x;
	cout<<"Input Nilai Quiz 2 = ";
	cin>>y;
	cout<<"Input Nilai Quiz 3 = ";
	cin>>z;
	
	if (x>y){
		if (x>z){
			cout<<"\nNilai Quiz Anda "<<x;
		}else {
			cout<<"\nNilai Quiz Anda "<<z;
		}
	}else {
		if (y>z){
			cout<<"\nNilai Quiz Anda "<<y;
		}else {
			cout<<"\nNilai Quiz Anda "<<z;
		}
	}	
	cout<<"\n\nNilai Quiz Didapat Berdasarkan Nilai Terbesar dari Ketiga Nilai Quiz";
getch();	
}

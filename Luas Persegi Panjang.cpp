#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int panjang, lebar;
	float luas;
	
	cout<<"\t\t\tMencari Luas Persegi Panjang";
	cout<<"\nInput Panjang : ";
	cin>>panjang;
	cout<<"Input Lebar : ";
	cin>>lebar;
	
	luas = panjang*lebar;
	
	cout<<"\nLuas Persegi Panjang";
	cout<<"\nPanjang = "<<panjang;
	cout<<"\nLebar = "<<lebar;
	cout<<"\nLuas = "<<luas;
	getch();
}

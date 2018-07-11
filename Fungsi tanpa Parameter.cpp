#include <iostream>
#include <conio.h>
using namespace std;
void LuasPersegi (){
	int panjang,lebar;
	cout<<"\nMasukan Panjang\t= "; cin>>panjang;
	cout<<"Masukan Lebar\t= "; cin>>lebar;
	cout<<"Luas Persegi\t= "<<panjang*lebar;
}
int main(){
	LuasPersegi();
	getch();
}

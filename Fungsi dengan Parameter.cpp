#include <iostream>
#include <conio.h>
using namespace std;

int LuasPersegi(int p, int l){
	int luas;
	luas = p*l;
	return luas;
}

int main(){
	int a,b;
	cout<<"\nMasukan Panjang\t= "; cin>>a;
	cout<<"Masukan Lebar\t= "; cin>>b;
	cout<<"Luas Persegi\t= "<<LuasPersegi(a,b);
	return 0;
}

#include <iostream>
#include <conio.h>
using namespace std;
int main (){
	int jari;
	float luas, keliling;
	cout<<"Input Jari - Jari Lingkaran"<<endl;
	cin>>jari;
	
	luas = 3.14 * jari * jari;
	keliling = 2 * 3.14 * jari;

cout<<"\nLuas dan Keliling Lingkaran";
cout<<"\nJari - Jari = "<<jari;
cout<<"\nLuas = "<<luas;
cout<<"\nKeliling = "<<keliling;
getch();
}

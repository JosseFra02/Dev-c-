#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;
int main(){
ofstream file_objek;
file_objek.open("latihan.txt");
cout<<"Latihan menulis ke dalam sebuah file\n";
for(int i=1;i<11;i++)
file_objek<<"Ini adalah baris ke "<<i<<endl;
file_objek.close();
}

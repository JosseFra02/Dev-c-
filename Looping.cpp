#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	//looping dengan for
	for (int i = 10; i>0; i--){
		cout<<i<<" ";
	}
	
	cout<<"\n\n";
	
	//looping dengan while
	int i = 1;
	while (i<20){
		if (i%2==0)
		cout<<i<<" "; i++;
	}
	
	getch();
}

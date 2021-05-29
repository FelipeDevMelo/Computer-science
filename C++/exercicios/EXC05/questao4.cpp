#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int numero;
	cout<<"informe o numero que deseja ver a tabuada:\n";
	cin>>numero;
	for(int i=1;i<=10;i++){
		cout<<numero<<" x "<<i<<" = "<<numero*i<<"\n";
	}
	
	
	
	
	return 0;
}

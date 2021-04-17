#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int numeroTabuada;
	cout<<"informe o numero que deseja ver a tabuada\n";
	cin>>numeroTabuada;
	cout<<"-----------------------------------------\n";
	
	for(int i; i<=10;i++){
		
		cout<<numeroTabuada<<" x "<<i<<" = "<<numeroTabuada*i<<"\n";
		
	}
	
	
	
	
	return 0;
}

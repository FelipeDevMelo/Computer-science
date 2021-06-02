#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int numeros=0,maiorNum,menorNum;
	
	do{
		
		cout<<"informe um numero\n";
		cin>>numeros;
		
		
		if(numeros>maiorNum && numeros>0){
			maiorNum=numeros;
		}else if(numeros>0){
			menorNum=numeros;
		}else{
			cout<<"numero invalido\n";
		}
	}while(numeros!=0);
	
	cout<<"maior numero: "<<maiorNum<<"\n";
	cout<<"menor numero: "<<menorNum<<"\n";
	
	
	return 0;
}

#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
		float preco;
	cout<<"informe o preco do produto\n";
	cout<<"---------------\n";
	cin>>preco;
	
	if(preco<30){
		cout<<"sem desconto";		
	}else if(preco==30 && preco<=100){
	cout<<"seu desconto e de 10% -R$" << preco+(preco*0.1);
	}else{
		cout<<"seu desconto e de 15% - R$" << preco+(preco*0.15);
	}
	
	return 0;
}

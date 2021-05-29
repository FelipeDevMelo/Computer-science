#include <iostream>
using namespace std;
#include <string>
#include<locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int opcao, soma; 
	int transacoes[15];
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"deseja efetuar as compras a 1-vista ou 2-prazo?\n";
	cin>>opcao;
	
	for(int i =0;i<15;i++){
		
		cout<<"informe o valor da "<<i+1<<"º transação\n";
		cin>>transacoes[i];
		
	}
	
	switch(opcao){
		case 1:
	
	    	for(int i =0;i<15;i++){
		     soma+=transacoes[i];
	    	}
			cout<<"valor total das compras: R$"<<soma;
				break;
		case 2:
			
			for(int i =0;i<15;i++){
			soma+=transacoes[i];
			}
			cout<<"valor total das compras em 3x: R$"<<soma/3;
				break;
				
		default:
			cout<<"opção inválida";
			break;
	}
	return 0;
}

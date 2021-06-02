#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int codigoCliente,opcao;
	float investimento;
	do{
		cout<<"|_______|_______________________|____________________\n";
		cout<<"| Opcao |      Descricao        | Rendimento mensal\n";
		cout<<"|_______|_______________________|____________________\n";
		cout<<"|   1   |  Poupanca             |        1.5%\n";
		cout<<"|_______|_______________________|____________________\n";
		cout<<"|   2   |  Poupanca plus        |        2%\n";
		cout<<"|_______|_______________________|____________________\n";
		cout<<"|   3   |  fundos de renda fixa |        4%\n";
		cout<<"|_______|_______________________|____________________\n\n";
		
		cout<<"informe seu codigo: ";
		cin>>codigoCliente;	
		cout<<"escolha uma opcao:\n";
		cin>>opcao;
		cout<<"quanto quer investir?\n";
		cin>>investimento;
		switch(opcao){
			case 1:
				cout<<"rendimento mensal de: R$"<<(investimento*(1.5/100))<<"\n";
				break;
			case 2:
				cout<<"rendimento mensal de: R$"<<(investimento*0.02)<<"\n";
				break;
			case 3:
				cout<<"rendimento mensal de: R$"<<(investimento*0.04)<<"\n";
				break;
				
		}
		
	}while(codigoCliente!=0);
	
	
	
	
	
	return 0;
}

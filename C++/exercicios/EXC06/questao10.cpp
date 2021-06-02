#include <iostream>
#include<iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int opcao;
	float salario;
	cout.precision(2);
	
	do{
		cout<<"1.novo salario\n2.ferias\n3.decimo terceiro\n4.sair\n";
		cin>>opcao;
		switch(opcao){
			case 1:
				cout<<"qual seu salario atual?\n";
				cin>>salario;
				if(salario<210){
					cout<<"novo salario: R$"<<fixed<<(salario*0.15)+salario<<"\n";
				}else if(salario>=210 && salario<=600){
						cout<<"novo salario: R$"<<fixed<<(salario*0.10)+salario<<"\n";
				}else if(salario>600){
						cout<<"novo salario: R$"<<fixed<<(salario*0.05)+salario<<"\n";
				}
			case 2:
				cout<<"qual seu salario atual?\n";
				cin>>salario;
				cout<<"salario de ferias: R$"<<fixed<<(salario/3)+salario<<"\n";
			case 3:
				int meses;
				cout<<"qual seu salario atual?\n";
				cin>>salario;
				cout<<"quantos meses ja trabalhou?\n";
				cin>>meses;
				cout<<"salario 13: R$"<<fixed<<(salario*meses)/12<<"\n";
		}
		
	}while(opcao!=4);
	return 0;
}

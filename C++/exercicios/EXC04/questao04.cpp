#include <iostream>
#include <locale.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	int opcao, salario, imposto;
	cout <<"Informe seu salário:\n";
	cin >> salario;
	imposto = salario * 0.07;
	cout <<"1 - Menor que 350.\n2 - Entre 350 e 600.\n3 -Entre 600 e 900.\n4 - Acima de 900.\n";
	cin >> opcao;
	switch(opcao){
		case 1:
			cout<<"Você receberá uma gratificação de 100.Com o desconto do imposto seu salário ficará: "<<(salario-imposto)+100;
			break;
		case 2:
		    cout<<"Você receberá uma gratificação de 75.Com o desconto do imposto seu salário ficará: "<<(salario-imposto)+75;
			break;	
	    case 3:
		    cout<<"Você receberá uma gratificação de 50.Com o desconto do imposto seu salário ficará: "<<(salario-imposto)+50;
		    break;
		case 4:
		    cout<<"Você receberá uma gratificação de 35.Com o desconto do imposto seu salário ficará: "<<(salario-imposto)+35;
		    break;
		default: cout <<"Error."  ;  
		}
	return 0;
}

#include <iostream>
#include <locale.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	int salario, opcao;
	cout<<"Informe seu salário: \n";
	cin>>salario;
	cout<<"Quais das opções abaixo se caracteriza seu salário?:\n";
	cout<<"1 - Menos que 300.\n2 - Entre 300 a 500.\n3 - Entre 500 a 700.\n4 - Entre 700 a 800.\n5 - Entre 800 a 1000.\n6 - Acima de 1000\n";
	cin>>opcao;
	switch(opcao){
		case 1:
			cout<<"Seu aumento será de 50%. Seu salário ficará: " <<(salario*0.5)+salario;
			break;
		case 2:
			cout<<"Seu aumento será de 40%. Seu salário ficará: " <<(salario*0.4)+salario;
			break;
		case 3:
			cout<<"Seu aumento será de 30%. Seu salário ficará: " <<(salario*0.3)+salario;
			break;
		case 4:
			cout<<"Seu aumento será de 20%. Seu salário ficará: " <<(salario*0.2)+salario;
			break;
		case 5:
			cout<<"Seu aumento será de 10%. Seu salário ficará: " <<(salario*0.1)+salario;
			break;
		case 6:
			cout<<"Seu aumento será de 5%. Seu salário ficará: " <<(salario*0.05)+salario;
			break;
		default:
			cout<<"ERROR";
	}
	return 0;
}

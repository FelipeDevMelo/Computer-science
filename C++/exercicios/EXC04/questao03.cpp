#include <iostream>
#include <locale.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	int opcao, salario;
	cout <<"Informe seu salário:\n";
	cin >> salario;
	cout <<"1 - Menor que 300.\n2 - Entre 300 e 600.\n3 -Entre 600 e 900.\n4 - Acima de 900.\n";
	cin >> opcao;
	switch(opcao){
		case 1:
			cout<<"Aumento de 15%, seu salário ficará: "<<(salario*0.15)+salario;
			break;
		case 2:
		    cout<<"Aumento de 10%, seu salário ficará: "<<(salario*0.1)+salario;
			break;	
	    case 3:
		    cout<<"Aumento de 5%, seu salário ficará: "<<(salario*0.05)+salario;
		    break;
		default:
		    cout<<"Não haverá aumento.";
		}
	return 0;
}

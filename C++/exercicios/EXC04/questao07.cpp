#include <iostream>
#include <locale.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
		setlocale(LC_ALL,"Portuguese");
	int opcao, idade;
	cout <<"Informe sua idade:\n";
	cin >> idade;
	cout <<"1 - Menos de 5 anos.\n2 - Entre 5 a 7 anos.\n3 -Entre 8 a 10 anos.\n4 - Entre 11 a 15 anos.\n5 -Entre 16 a 30 anos.\n6 - Acima de 30 anos.\n";
	cin >> opcao;
	switch(opcao){
		case 1:
			cout<<"Bebês.";
			break;
		case 2:
		    cout<<"Infantil";
			break;	
	    case 3:
		    cout<<"Juvenil";
		    break;
		case 4:
		    cout<<"Adolescente";
			break;
		case 5:
		    cout<<"Adulto";
			break;
		default:
		    cout<<"Sênior";
		}
	return 0;
}

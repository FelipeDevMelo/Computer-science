#include <iostream>
#include <locale.h>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
		setlocale(LC_ALL,"Portuguese");
	int codigo;
	cout <<"Informe o c�digo.\n";
	cout << "1 - 01.\n2 - 02.\n3 - 03.\n4 - 04.\n5 - 05 a 06.\n6 - 07 a 09.\n7 - 10 a 20.\n8 - 21 a 30.\n";
	cin >> codigo;
	
	switch(codigo){
		case 1:
			cout<<"Proced�ncia Sul";
			break;
		case 2:
		    cout<<"Proced�ncia Norte";
			break;	
	    case 3:
		    cout<<"Proced�ncia Leste";
		    break;
		case 4:
		    cout<<"Proced�ncia Oeste";
			break;
		case 5:
		    cout<<"Proced�ncia Nordeste";
			break;
		case 6:
		    cout<<"Proced�ncia Sudeste";
			break;
		case 7:
		    cout<<"Proced�ncia Centro-Oeste";
			break;
		case 8:
		    cout<<"Proced�ncia Nordeste";
			break;
			
		default:
		    cout<<"C�digo Inv�lido.";
		}
	return 0;
}

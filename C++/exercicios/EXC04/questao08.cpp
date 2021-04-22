#include <iostream>
#include <locale.h>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
		setlocale(LC_ALL,"Portuguese");
	int codigo;
	cout <<"Informe o código.\n";
	cout << "1 - 01.\n2 - 02.\n3 - 03.\n4 - 04.\n5 - 05 a 06.\n6 - 07 a 09.\n7 - 10 a 20.\n8 - 21 a 30.\n";
	cin >> codigo;
	
	switch(codigo){
		case 1:
			cout<<"Procedência Sul";
			break;
		case 2:
		    cout<<"Procedência Norte";
			break;	
	    case 3:
		    cout<<"Procedência Leste";
		    break;
		case 4:
		    cout<<"Procedência Oeste";
			break;
		case 5:
		    cout<<"Procedência Nordeste";
			break;
		case 6:
		    cout<<"Procedência Sudeste";
			break;
		case 7:
		    cout<<"Procedência Centro-Oeste";
			break;
		case 8:
		    cout<<"Procedência Nordeste";
			break;
			
		default:
		    cout<<"Código Inválido.";
		}
	return 0;
}

#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int anoAtual,anoNasc,idade;
	
	cout<<"calcule sua idade\n";
		cout<<"-------------------------\n";
		
	cout<<"informe o ano em que nasceu\n";
		cin >> anoNasc;
		
	cout<<"informe o atual\n";
		cin >> anoAtual;
		
		idade=anoAtual-anoNasc;
		
		cout<<"sua idade em: \n"<<"anos:"<<anoAtual-anoNasc<<"\n"<<"meses:"<<idade*12<<"\n"<<"dias: "<<idade*365<<"\n"<<"semanas: "<<idade*48;  
	
	return 0;
}

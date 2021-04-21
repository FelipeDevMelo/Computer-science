#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
		float saldoMedio;
	cout<<"informe seu saldo medio\n";
	cout<<"---------------\n";
	cin>>saldoMedio;
	
	if(saldoMedio>400){
		cout<<"seu saldo medio de "<<saldoMedio<<" lhe concedeu um credito especial de " <<saldoMedio+(saldoMedio*0.3);
		
		
	}else if(saldoMedio==400 && saldoMedio>300){
	cout<<"seu saldo medio de "<<saldoMedio<<" lhe concedeu um credito especial de " <<saldoMedio+(saldoMedio*0.25);
	}else if(saldoMedio==300 && saldoMedio>200){
	cout<<"seu saldo medio de "<<saldoMedio<<" lhe concedeu um credito especial de " <<saldoMedio+(saldoMedio*0.2);
	}else if(saldoMedio==200){
	cout<<"seu saldo medio de "<<saldoMedio<<" lhe concedeu um credito especial de " <<saldoMedio+(saldoMedio*0.1);
	}
	return 0;
}

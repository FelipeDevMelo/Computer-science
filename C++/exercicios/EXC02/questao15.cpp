#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float salario,conta1,conta2;
	
	cout<<"informe seu salario\n";
		cin>>salario;
	
	cout<<"informe o valor da primeira conta\n";
		cin>>conta1;
		
	cout<<"informe o valor da segunda conta\n";
		cin>>conta2;
	
	cout<<"suas contas ficaram "
	<<conta1+(conta1*0.02)<<" e "
	<<conta2+(conta2*0.02)<<", sobrando R$"
	<<salario-(conta1+(conta1*0.02)+conta2+(conta2*0.02));
	
	return 0;
}

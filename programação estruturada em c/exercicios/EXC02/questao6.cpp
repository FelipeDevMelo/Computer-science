#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float salario,comissao;
	
	cout<<"informe seu salario\n";
	cin >> salario;
	cout<<"informe suas vendas\n";
	cin>>comissao;
	cout<<"seu salario com 4%" <<"("<<comissao*0.04<<")"<<" ficou:" <<salario+(comissao*0.04);
	
	
	
	
	
	return 0;
}

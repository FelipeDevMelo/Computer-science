#include <iostream>
using namespace std;
#include<math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num1,num2;
	int opcao;
	
	cout<<"informe dois numeros\n";
	cin>>num1;
	cin>>num2;
	cout<<"informe sua operação desejada\n";
	cout<<"1-O primeiro numero elevado ao segundo numero.\n2-Raiz quadrada de cada um dos numeros.\n3-Raiz c´ubica de cada um dos numeros";
	cin>>opcao;
	switch(opcao){
		case 1:cout<<pow(num1,num2);
		break;
		case 2:cout<<pow(num1,2)<<"\n"<<pow(num2,2);
		break;
		case 3:cout<<pow(num1,3)<<"\n"<<pow(num2,3);
		break;
	
		default:cout<<"ERRO203";
		break;		
	}
	
	return 0;
}

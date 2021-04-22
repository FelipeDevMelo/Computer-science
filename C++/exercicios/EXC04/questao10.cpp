#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int horaExtra,horaFaltada,h;
	
	cout<<"informe o numero de horas extras que voce fez\n";
	cin>>horaExtra;
	cout<<"informe o numero de horas faltadas\n";
	cin>>horaFaltada;
	
	h=horaExtra-(2/3*horaFaltada);
	int a;
	if(h>=2400){
		a=1;
	}else if(h<2400 && h>1800){
		a=2;
	}else if(h<=1800 && h>1200){
		a=3;
		
	}else if(h<=1200 && h>600){
		a=4;
	}else if(h<600){
		a=5;
	}
	
	
	
	
	switch(a){
		case 1:cout<<"seu premio é de R$500,00";
		break;
		case 2:cout<<"seu premio é de R$400,00";
		break;
		case 3:cout<<"seu premio é de R$300,00";
		break;
		case 4:cout<<"seu premio é de R$200,00";
		break;
		case 5:cout<<"seu premio é de R$100,00";
		break;
		default:cout<"Erro!";
		break;
	}
	
	
	
	return 0;
}

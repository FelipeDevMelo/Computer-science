#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
		float salario;
	cout<<"informe seu salario\n";
	cout<<"---------------\n";
	cin>>salario;
	
	if(salario<=300){
		cout<<"seu reajuste foi para: "<<(salario*0.35)+salario;
		
		
	}else{
		cout<<"seu reajuste foi para: "<<(salario*0.15)+salario;
	}
	return 0;
}

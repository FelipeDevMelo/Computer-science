#include <iostream>
using namespace std;
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string resposta;
	float dinheiro;
	string tipo;
		
		
	
	do{
	cout<<"informe seu tipo de investimento entre poupanca ou fundos de renda fixa\n";

	
	cin>>tipo;
	cout<<"informe o valor  do seu investimento\n ";
	
	cin>>dinheiro;
	if(tipo=="poupanca"){
		cout<<"seu valor corrigido e "<< dinheiro+(dinheiro*0.03)<<"\n"; 
	}else if(tipo=="fundos de renda"){
		cout<<"seu valor corrigido e "<< dinheiro+(dinheiro*0.04)<<"\n"; 
	}else{
	cout<<"valor incorreto\n";
	}
	
	
	cout<<"quer repetir o processo?(S|N)\n";
	
	cin>>resposta;
}
	while(resposta=="s"||resposta=="S"||resposta=="sim");
	return 0;
}

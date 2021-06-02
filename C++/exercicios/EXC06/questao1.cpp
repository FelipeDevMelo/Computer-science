#include <iostream>
#include <iomanip>
using namespace std;
#include<locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	float precoCarro,precoTotal,parcelas=6,acrescimo=3;
	
		cout<<"informe o preço do carro:\n";
		cin>>precoCarro;
		
		cout<<"Parcelas      |      Acrescimo      | Preço total\n";
		cout<<"______________________________________________________________\n";
		cout.precision(2);
		cout<<"   "<<fixed<<0<<"x de R$"<<precoTotal/parcelas<<"|        -20%         |      R$"<<precoCarro-(precoCarro*0.20)<< "\n";
		cout<<"______________________________________________________________\n";
	while(parcelas<=60){
		precoTotal=precoCarro*(acrescimo/100)+precoCarro;
			cout.precision(2);
		cout<<"   "<<fixed<<parcelas<<"x de R$"<<precoTotal/parcelas<<"|        "<<acrescimo<<"%         |      R$"<<precoTotal<< "\n";
		
		cout<<"______________________________________________________________\n";
		
		acrescimo+=3;
		parcelas+=6;
	}
	
	
	
	
	
	return 0;
}

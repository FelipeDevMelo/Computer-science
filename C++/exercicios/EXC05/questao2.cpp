#include <iostream>
#include <iomanip>
using namespace std;
#include<locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
			int i=1;
			int opcao;
		
			
		cout<<"Informe qual o preço dos ingressos:\n";
		for(float preco=5.00;preco>=1;preco-=0.50){
		
			cout.precision(2);
			cout<<i<<" - "<<"R$"<<fixed<<preco<<endl;
			i++;
		}
		cout<<"----------------------------\n";
		cin>>opcao;
			switch(opcao){
			case 1:
				cout<<"Ingresso : R$5,00\nLucro : R$400,00\nIngressos vendidos : 120\n";
				break;
				
			case 2:
				cout<<"Ingresso : R$4,50\nLucro : R$457,00\nIngressos vendidos : 146\n";
				break;
				
			case 3:
				cout<<"Ingresso : R$4,00\nLucro : R$488,00\nIngressos vendidos : 172\n";
				break;
				
			case 4:
				cout<<"Ingresso : R$3,50\nLucro : R$493,00\nIngressos vendidos : 198\n";
				break;
				
			case 5:
				cout<<"Ingresso : R$3,00\nLucro : R$472,00\nIngressos vendidos : 224\n";
				break;
				
			case 6:
				cout<<"Ingresso : R$2,50\nLucro : R$425,00\nIngressos vendidos : 250\n";
				break;
				
			case 7:
				cout<<"Ingresso : R$2,00\nLucro : R$352,00\nIngressos vendidos : 276\n";
				break;
				
			case 8:
				cout<<"Ingresso : R$1,50\nLucro : R$253,00\nIngressos vendidos : 302\n";
				break;
				
			case 9:
				cout<<"Ingresso : R$1,00\nLucro : R$128,00\nIngressos vendidos : 328\n";
				break;
			
			default:
				cout<<"opção inválida";
				break;
				
		}
	
		
		
	return 0;
}

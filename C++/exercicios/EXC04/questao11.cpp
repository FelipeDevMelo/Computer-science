#include <iostream>
using namespace std;
#include<string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float preco;
	 int categoria;
	string situacao;
	cout<<"informe o preco do produto \n";
	cin>>preco;
	cout<<"~~~~CATEGORIA~~~~\n";
	cout<<"1-limpeza\n2-alimentacao\n3-vestuario\n";
	cin>>categoria;
	cout<<"informe a situacao\nR-precisa de refrigeracao | N-nao precisa de refrigeracao\n";
	cin>>situacao;
	if(preco<=25){
		switch(categoria){
			case 1:	if(situacao=="r"){
			cout<<"seu preco novo ficara por R$"<<(preco+(preco*0.05))+(preco+(preco*0.05));
			}else{
			cout<<"seu preco novo ficara por R$"<<(preco+(preco*0.05))+(preco+(preco*0.08));	
			}
			break;
			case 2:
			if(situacao=="r"){
			cout<<"seu preco novo ficara por R$"<<(preco+(preco*0.08))+(preco+(preco*0.05));
			}else{
			cout<<"seu preco novo ficara por R$"<<(preco+(preco*0.08))+(preco+(preco*0.08));	
			}
			break;
			case 3:if(situacao=="r"){cout<<"seu preco novo ficara por R$"<<(preco+(preco*0.01))+(preco+(preco*0.05));
			}else{
			cout<<"seu preco novo ficara por R$"<<(preco+(preco*0.01))+(preco+(preco*0.08));	
			}
			break;
		}
	}else if(preco>25){
			switch(categoria){
			case 1:if(situacao=="r"){cout<<"seu preco novo ficara por R$"<<(preco+(preco*0.12))+(preco+(preco*0.05));
			}else{
			cout<<"seu preco novo ficara por R$"<<(preco+(preco*0.12))+(preco+(preco*0.08));	
			};
			break;
			case 2:	if(situacao=="r"){
			cout<<"seu preco novo ficara por R$"<<(preco+(preco*0.15))+(preco+(preco*0.05));
			}else{
			cout<<"seu preco novo ficara por R$"<<(preco+(preco*0.15))+(preco+(preco*0.08));	
			}
			break;
			case 3:if(situacao=="r"){cout<<"seu preco novo ficara por R$"<<(preco+(preco*0.18))+(preco+(preco*0.05));
			}else{
			cout<<"seu preco novo ficara por R$"<<(preco+(preco*0.18))+(preco+(preco*0.08));	
			}
			break;
		}
	}
	
	
	
	
	
	
	
	
	return 0;
}

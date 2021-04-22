#include <iostream>
#include <locale.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
    int preco, opcao1, opcao2;
    cout<<"Informe o preço do produto: \n";
    cin>>preco;
    cout<<"Quais das opções a seguir se encaixa no preço?\n";
    cout<<"1 - até 50.\n2 - Entre 50 a 100.\n3 - Acima de 100.\n";
    cin>>opcao1;
    switch(opcao1){
    	case 1:
    		cout<<"Seu novo preço ficou: "<<(preco*0.05)+preco <<"\n";
    		break;
    	case 2:
    		cout<<"Seu novo preço ficou: "<<(preco*0.1)+preco <<"\n";
    	    break;
    	case 3:
    		cout<<"Seu novo preço ficou: "<<(preco*0.15)+preco <<"\n";
    		break;
    	default:
    		cout<<"Error";
    		   	
	}
	cout<<"Seu novo preço se encaixa em qual categoria?\n";
	cout<<"1 - Menor que 80.\n2 -De 80 até 120.\n3 - De 120 até 200.\n";
	cin>>opcao2;
	switch(opcao2){
		case 1:
			cout<<"BARATO";
			break;
	    case 2:
	    	cout<<"NORMAL";
	    	break;
	    case 3:
	    	cout<<"CARO";
	    	break;
	    case 4:
	    	cout<<"MUITO CARO";
	    	break;
	    default:
	    	cout<<"ERRO";
	}
    
	return 0;
}

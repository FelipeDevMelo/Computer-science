#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int opcao;
	float nota1,nota2,nota3,peso1,peso2,peso3;
	do
	{
		cout<<"1-media aritimetica\n2-media ponderada\n3-sair\n";
		cin>>opcao;
		switch(opcao){
			case 1:
				cout<<"informe a primeira nota:  ";
				cin>>nota1;
				cout<<"informe a segunda nota:  ";
				cin>>nota2;
				cout<<"Media: "<<(nota1+nota2)/2<<"\n";
				break;
			
			case 2:
				cout<<"informe a primeira nota:  ";
				cin>>nota1;
				cout<<"informe o peso dessa nota:  ";
				cin>>peso1;
				cout<<"informe a segunda nota:  ";
				cin>>nota2;
				cout<<"informe o peso dessa nota:  ";
				cin>>peso2;
				cout<<"informe a terceira nota:  ";
				cin>>nota3;
				cout<<"informe o peso dessa nota:  ";
				cin>>peso3;
				
				cout<<"Media: "<<(nota1*peso1)+(nota3*peso3)+(nota3*peso3)/peso1+peso2+peso3<<"\n";
				break;
				
				default:
					cout<<"opcao invalida\n";
		}
	}while(opcao != 3);
	
	
	
	return 0;
}

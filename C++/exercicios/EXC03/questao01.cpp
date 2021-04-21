#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float nota1,nota2,nota3,nota4,media;
	
	cout<<"informe suas notas\n";
	cout<<"----------------------------\n";
	cin>>nota1;
	cin>>nota2;
	cin>>nota3;
	cin>>nota4;
	media=(nota1+nota2+nota3+nota4)/4;
	
	if(media>=7){
		cout<<"voce foi aprovado!";
		
			if(media==10 || media==9){
				
				cout<<"parabens!";
				
			}else{
				cout<<"precisa melhorar,mas ta quase la";
			}
	}else{
		cout<<"voce foi reprovado";	
	}
	
	
	
	
	
	
	return 0;
}

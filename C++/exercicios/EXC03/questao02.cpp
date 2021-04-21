#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float nota1,nota2,nota3,nota4,media;
	
	cout<<"informe suas notas\n";
	cout<<"----------------------------\n";
	cin>>nota1;
	cin>>nota2;

	media=(nota1+nota2)/2;
	
	if(media>=7 && media<=10){
		cout<<"voce foi aprovado!";
		
	}else if(media<7 && media>=3){
		cout<<"voce precisa fazer o exame";	
	}else{
		cout<<"reprovado";
	}
	
	
	
	
	
	
	return 0;
}

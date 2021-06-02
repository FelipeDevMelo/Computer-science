#include <iostream>
using namespace std;
#include <iomanip>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int canais=1;
	float pessoa ,canal4,canal5,canal7,canal12,totalPessoas;
	cout<<"Caso queira parar e ver a media digite 0\n";
	while(canais!=0){
		cout<<"informe o canal:\n";
		cin>>canais;
		cout<<"informe o numero de pessoas nesse canal:\n";
		cin>>pessoa;
		switch(canais){
			case 4:
				canal4+=pessoa;
				break;
			case 5:
				canal5+=pessoa;
				break;
			case 7:
				canal7+=pessoa;
				break;
			case 12:
				canal12+=pessoa;
				break;
			default:
				cout<<"opcao invalida\n";
				
				break;
		}
		
		
		
	}
	totalPessoas+=canal4;
	totalPessoas+=canal5;
	totalPessoas+=canal7;
	totalPessoas+=canal12;
	cout.precision(2);
	cout<<"Media de todos os canais : \n";
	cout<<"canal 4 - "<<fixed<<(canal4*100)/totalPessoas<<"%\n";
	cout<<"canal 5 - "<<fixed<<(canal5*100)/totalPessoas<<"%\n";
	cout<<"canal 7 - "<<fixed<<(canal7*100)/totalPessoas<<"%\n";
	cout<<"canal 12 - "<<fixed<<(canal12*100)/totalPessoas<<"%\n";
	return 0;
}

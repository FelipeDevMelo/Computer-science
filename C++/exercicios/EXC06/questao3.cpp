#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float idades,mediaIdades,idade;
	cout<<"Caso queira parar e ver a media digite 0\n";
	while(idade!=0){
		cout<<"informe uma idade:\n";
		cin>>idade;
		idades+=idade;
		if(idade!=0)
		{
		mediaIdades+=1;
		}
		
	}
	cout<<"media de todas as idades digitadas : "<<idades/mediaIdades;
	return 0;
}

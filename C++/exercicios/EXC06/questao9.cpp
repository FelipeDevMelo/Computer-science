#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int idade;
	float altura,altura50,alturaMedia;
	
	do{
		cout<<"informe a idade:\n";
		cin>>idade;
		cout<<"informe a altura:\n";
		cin>>altura;
		if(idade>50){
			altura50+=altura;
			alturaMedia+=1;
		}
	}while(idade!=0);
	cout<<"media de altura de pessoas com mais de 50 anos: "<<altura50/alturaMedia;
	
	return 0;
}

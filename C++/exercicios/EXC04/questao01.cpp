#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num1,num2;
	int opcao;
	
	cout<<"informe dois numeros\n";
	cin>>num1;
	cin>>num2;
	cout<<"informe sua operação desejada\n";
	cout<<"1-media\n2-subitrair\n3-multiplicar\n4-dividir\n";
	cin>>opcao;
	switch(opcao){
		case 1:cout<<(num1+num2)/2;
		break;
		case 2:cout<<num1-num2;
		break;
		case 3:cout<<num1*num2;
		break;
		case 4:
		if(num2!=0){
		cout<<num1/num2;}else{
			cout<<"ERRO";
		}
		
		break;
		default:cout<<"ERRO203";
		break;		
	}
	
	return 0;
}

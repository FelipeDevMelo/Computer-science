#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float nota1,nota2;
	
	cout<<"calculo de media\n";
	cout<<"----------------\n";
	cout<<"informe a primeira nota\n";
	cin >>nota1;
	cout<<"informe a segunda nota\n";
	cin>>nota2;
	
	cout<<"A sua media ponderada: "<<((nota1*2)+(nota2*3))/5;
	
	return 0;
}

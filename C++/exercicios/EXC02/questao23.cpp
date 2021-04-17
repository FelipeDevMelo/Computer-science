#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int anguloA,anguloB;
	
	cout<<"calcule o angulo que esta faltando do triangulo\n ";
	cout<<"-----------------------------------------------------\n";
	cout<<"informe os dois angulos\n";
	cin>>anguloA;
	cin>>anguloB;
	cout<<"o angulo qu esta faltando : "<<180-(anguloA+anguloB);
	
	
	
	return 0;
}

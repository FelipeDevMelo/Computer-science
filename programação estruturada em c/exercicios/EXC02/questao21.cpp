#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float salarioMin = 1100;
	float horaTrabalhada,horaExtra;
	cout<<"calcule seu salario\n";
	cout<<"--------------------------\n";
	cout<<"informe quantas horas voce trabalhou\n";
	cin>>horaTrabalhada;
	cout<<"informe quantas horas extras vc fez\n";
	cin>>horaExtra;
	float salario = ((salarioMin/8)*horaTrabalhada)+((salarioMin/4)*horaExtra);
	cout<<"seu salario ficou:"<<salario;
	
	
	
	return 0;
}

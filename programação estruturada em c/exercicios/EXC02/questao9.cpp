#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float baseMaior,baseMenor,altura;
	cout << "calcule a area de um trap�zio\n";
		cout<<"-----------------------------------------------\n";
	
	cout<< "informe o numero da base maior\n";
		cin >> baseMaior;
	
	cout <<"informe o numero da base menor\n";
		cin>> baseMenor;
	
	cout << "informe o numero da altura\n";
		cin >> altura;
		
	cout << "seu trapezio tem a �rea de: "<< ((baseMaior+baseMenor)*altura)/2;
	return 0;
}

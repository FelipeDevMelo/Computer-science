#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float  ladoA,ladoB;
	cout<<"calcule a potencia para iluminar seu quarto\n";
	cout<<"------------------------------------------------\n";
	cout<<"informe as dimensoes do quarto:\n";
	cin>>ladoA;
	cin>>ladoB;
	float area=ladoA*ladoB;
	cout<<"sua area e de: "<<area<<" m² "<<"a potencia necessaria sera de: "<<area*18<<"W";
	return 0;
}

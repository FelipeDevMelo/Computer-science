#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int diagonais;
	cout<<"calcule o numero de diagonais de um poligono\n";
	cout<<"------------------------------------------\n";
	cout<<"informe o numero de lados do poligono\n";
	cin>>diagonais;
	cout<<"seu poliogno tem "<<(diagonais*(diagonais-3))/2<<" diagonais";
	return 0;
}

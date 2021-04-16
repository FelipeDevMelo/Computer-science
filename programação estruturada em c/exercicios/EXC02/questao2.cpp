#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
		int numero1, numero2,numero3;
	
	cout << "multiplicar 3 numeros\n";
	cout << "-----------------------------------------------------\n";
	cout << "digite o primeiro numero\n";
	cin >> numero1;
	cout << "digite o segundo numero\n";
	cin >> numero2;
	cout << "digite o terceiro numero\n";
	cin >> numero3;
	
	cout <<"o resultado da soma:" << numero1 * numero2 * numero3;
	return 0;
}

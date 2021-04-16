#include <iostream>
using namespace std;
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	float peso;
	cout << "informe seu peso em quilos\n";
	cin >> peso;
	cout << "seu peso em gramas é: " << peso*1000;
	
	
	return 0;
}

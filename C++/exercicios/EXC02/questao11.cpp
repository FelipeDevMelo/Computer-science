#include <iostream>
using namespace std;
#include<locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float diagonalMaior,diagonalMenor;
	setlocale(LC_ALL, "Portuguese");
	cout << "caucule a area de um losango\n";
		cout<< "---------------------------------\n";
			cout<<"informe a diagonal maior do losango\n";
			cin >> diagonalMaior;
				cout<<"informe a diagonal menor do losango\n";
				cin >> diagonalMenor;
					cout<< "A area do seu losango é :" << (diagonalMaior*diagonalMenor)/2 << "\n";
	return 0;
}

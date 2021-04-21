#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int idade;
	cout <<"informe sua idade\n";
	cin>>idade;
	if(idade>=18){
		cout<<"voce e maior de idade";
	}else{
		cout<<"voce e menor de idade";
	}
	return 0;
}

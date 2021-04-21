#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int senha;
	cout<<"informe sua senha:\n";
	cin>>senha;
	if(senha==4531){
		cout<<"acesso permitido";
	}else{
		cout<<"acesso negado";
	}
	return 0;
}

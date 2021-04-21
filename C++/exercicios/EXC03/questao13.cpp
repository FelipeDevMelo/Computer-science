#include <iostream>
using namespace std;
#include<string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float altura;
	string sexo;
	cout<<"informe seu sexo M|F e sua altura\n";
	cin>>sexo;
	cin>>altura;
	if(sexo=="m"){
		cout<<"seu peso ideal e "<< (72.2*altura)-58;
	}else{
		cout<<"seu peso ideal e "<< (62.1*altura)-44.7;
	}
	return 0;
}

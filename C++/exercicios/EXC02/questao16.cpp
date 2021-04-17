#include <iostream>
using namespace std;
#include<locale.h>
#include<math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"portuguese");
	int catetoA,catetoB;
	
	cout<<"calcule a hipotenusa\n";
	cout<<"----------------------------";
	cout<<"informe o primeiro cateto\n";
		cin>>catetoA;
	cout<<"informe o segundo cateto\n";
		cin>>catetoB;
	
		cout<<"a sua hipotenusa é: "<<sqrt(pow(catetoA,2)+pow(catetoB,2)); 
	
	return 0;
}

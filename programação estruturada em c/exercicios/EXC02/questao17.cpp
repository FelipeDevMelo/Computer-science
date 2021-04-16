#include <iostream>
using namespace std;
#include<math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float pi= atan(1)*4;
	float raio;
	cout<<"informe o raio da esfera que deseja calcular\n";
		cin>>raio;
	cout<<"o comprimento da sua espera é: "<<2*pi*raio<<"\n"
	<<"a área de sua espefra é:"<<pi*pow(raio,2)<<"\n"
	<<"o volume da esfera é:"<<(3*pi*pow(raio,3))/4;
	
	return 0;

}

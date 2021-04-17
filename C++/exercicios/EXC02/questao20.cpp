#include <iostream>
#include<math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int angulo,catetoAdj;
	cout<<"informe o angulo da escada:\n";
	cin>>angulo;
	cout<<"informe a distancia da escada para a parede:\n";
	cin>>catetoAdj;
	cout<<"a medida da escada deve ser:"<<cos(angulo)*catetoAdj;
	
	
	
	return 0;
}

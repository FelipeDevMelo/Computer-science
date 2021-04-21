#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
		float custoFabrica;
	cout<<"informe custo de fabrica do seu carro\n";
	cout<<"---------------\n";
	cin>>custoFabrica;
	
	if(custoFabrica<12000){
		cout<<"o preco do seu carro e de  " <<custoFabrica+(custoFabrica*0.05);
		
		
	}else if(custoFabrica==12000 && custoFabrica<=25000){
		cout<<"o preco do seu carro e de  " <<custoFabrica+(custoFabrica*0.1)+(custoFabrica*0.15);
}else if(custoFabrica<25000){
		cout<<"o preco do seu carro e de  " <<custoFabrica+(custoFabrica*0.15)+(custoFabrica*0.20);
}
	return 0;
}

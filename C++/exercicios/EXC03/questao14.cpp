#include <iostream>
using namespace std;
#include<string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float peso;
	int idade;
	cout<<"informe seu peso e sua idade\n";
	cin>>peso;
	cin>>idade;
	if(idade<20){
		if(peso<60){
			cout<<"seu grupo de risco e o 9";
		}else if(peso>=60 && peso<=90){
			cout<<"seu grupo de risco e o 8";
		}else{
			cout<<"seu grupo de risco e o 7";
		}
	
	}else if(idade>=20 && idade<50){
		if(peso<60){
			cout<<"seu grupo de risco e o 6";
		}else if(peso>=60 && peso<=90){
			cout<<"seu grupo de risco e o 5";
		}else{
			cout<<"seu grupo de risco e o 4";
		}
	}else if(idade>50){
		if(peso<60){
			cout<<"seu grupo de risco e o 3";
		}else if(peso>=60 && peso<=90){
			cout<<"seu grupo de risco e o 2";
		}else{
			cout<<"seu grupo de risco e o 1";
		}
	}
	return 0;
}

#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
		int num1,num2,num3;
	
	cout<<"informe os numeros\n";
	cout<<"----------------------------\n";
	cin>>num1;
	cin>>num2;
	cin>>num3;
	
	
	if(num1>num2 && num1>num3){
		cout<<num1;
	}else if(num2>num1 && num2>num3){
		cout<<num2;
	}else{
		cout<<num3;
	}
	
	return 0;
}

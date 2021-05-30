#include <iostream>
using namespace std;
#include<locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int	numeros[10],somaPrimos=0,divisores=0;
	 setlocale(LC_ALL, "Portuguese");
	for(int i=0;i<10;i++){
		cout<<"informe o "<<i+1<<"º numero\n";
		cin>>numeros[i];
	
		for(int j=1 ; j<=numeros[i] ; j++){
		
        if(numeros[i]%j==0){
		
            divisores++;
            
            
		} 
	
		
	}
		if(divisores==2){
           	somaPrimos+=1;
           	
		}
	divisores=0;
}
	cout<<"existem "<<somaPrimos<<" numeros primos\n";
	
	return 0;
}

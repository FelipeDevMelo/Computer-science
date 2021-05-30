#include <iostream>
using namespace std;
#include<locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	int idade[15],peso[15],mediaPeso1=0,peso1,mediaPeso2=0,peso2,mediaPeso3=0,peso3,mediaPeso4=0,peso4;
	
	for(int i=0;i<15;i++){
		cout<<"informe o peso da "<<i+1<<"º pessoa\n";
		cin>>peso[i];
		cout<<"informe a idade da "<<i+1<<"º pessoa\n";
		cin>>idade[i];
		if(idade[i]>=1 && idade[i]<=10){
			
			mediaPeso1+=1;
			peso1+=peso[1];
			
		}else if(idade[i]>=11 && idade[i]<=20){
			
			mediaPeso2+=1;
			peso2+=peso[1];
			
		}else if(idade[i]>=21 && idade[i]<=30){
		
			mediaPeso3+=1;
			peso3+=peso[1];
			
		}else if(idade[i]>31 ){
			mediaPeso4+=1;
			peso4+=peso[1];
		}
		
	}
	return 0;
}

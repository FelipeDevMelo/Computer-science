#include <iostream>
using namespace std;
#include<locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	int idade[5],qntdMaiorQ50=0,mediaIdade=0,pesoMenor40=0;
	float peso[5],altura[5],entre10E20[5],soma;
	
	for(int i=0;i<5;i++){
		cout<<"informe a idade da "<<i+1<<"º pessoa\n";
		cin>>idade[i];
		cout<<"informe a altura da "<<i+1<<"º pessoa\n";
		cin>>altura[i];
		cout<<"informe o peso da "<<i+1<<"º pessoa\n";
		cin>>peso[i];
	}
	
	for(int i=0;i<5;i++){
		if(peso[i]<40){
			pesoMenor40+=1;
		}
	}
	
	
	for(int i=0;i<5;i++){
		if(idade[i]>50){
			qntdMaiorQ50+=1;
		}else if(idade[i]>=10 && idade[i]<=20){
			mediaIdade+=1;
			entre10E20[i]=altura[i];
			
		}
		
		
	}
	for(int i=0;i<5;i++){
		soma+=entre10E20[i];
	}
	cout<<"a média das alturas das pessoas com idade entre 10 e 20 anos: "<<soma/mediaIdade<<"\n";
	cout<<"existem "<<qntdMaiorQ50<<" pessoas acima de 50 anos\n";
	
	cout<<"a porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas "<<(pesoMenor40*100)/5<<"% \n";
	
	
	return 0;
}

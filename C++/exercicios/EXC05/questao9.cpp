#include <iostream>

using namespace std;
#include<locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");	
	int idade[10],qntdMaiorQ90=0,mediaAltura=0,idadeEntre10E30=0,alturaMaior190=0;
	float peso[10],altura[10],alturaMenor[10],soma;
	//recebendo informações das pessoas
	for(int i=0;i<10;i++){
		cout<<"informe a idade da "<<i+1<<"º pessoa\n";
		cin>>idade[i];
		if(idade[i]>=10 && idade[i]<=30 ){
	       idadeEntre10E30+=1;
		}
		cout<<"informe a altura da "<<i+1<<"º pessoa\n";
		cin>>altura[i];
		if(altura[i]>1.90){
			alturaMaior190+=1;
		}
		
		cout<<"informe o peso da "<<i+1<<"º pessoa\n";
		cin>>peso[i];
		if(altura[i]<1.50 && peso[i]>90){
			qntdMaiorQ90+=1;
		}
		
		soma+=idade[i];
	}
	
		
	cout<<"a média das idades das 10 pessoas é : "<<soma/10<<"\n";
	cout<<"existem "<<qntdMaiorQ90<<" pessoas com peso acima de 90KG e com altura inferior a 1,50m\n";
	
	cout<<"a porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1,90 m."<<(idadeEntre10E30*100)/alturaMaior190<<"% \n";
	
	
	return 0;
}


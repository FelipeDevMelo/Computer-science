#include <iostream>
#include<string>
using namespace std;
#include<locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	string corOlhos[6],corCabelo[6];
	int idade[6],qntdMaiorQ50=0,mediaAltura=0,olhosAzuis=0,ruivoSemAzul=0;
	float peso[6],altura[6],alturaMenor[6],soma;
	//recebendo informações das pessoas
	for(int i=0;i<6;i++){
		cout<<"informe a idade da "<<i+1<<"º pessoa\n";
		cin>>idade[i];
		cout<<"informe a altura da "<<i+1<<"º pessoa\n";
		cin>>altura[i];
		if(altura[i]<1.50){
			mediaAltura+=1;
			alturaMenor[i]=altura[i];
			}
		cout<<"informe o peso da "<<i+1<<"º pessoa\n";
		cin>>peso[i];
		if(idade[i]>50 && peso[i]<60){
			qntdMaiorQ50+=1;
			}
		cout<<"informe a cor dos olhos da "<<i+1<<"º pessoa\n";
		cout<<"A - azul/ P- preto / V - verde / C - castanho\n";
		cin>>corOlhos[i];
		
		if(corOlhos[i] =="A"){
			olhosAzuis+=1;
		}
		cout<<"informe a cor dos cabelos da "<<i+1<<"º pessoa\n";
		cout<<"P - preto / C - castanho / L - louro / e R - ruivo\n";
		cin>>corCabelo[i];
		 if(corOlhos[i] !="A" && corCabelo[i]=="R"){
			ruivoSemAzul+=1;
		}
		soma+=alturaMenor[i];
	}
	
		
	cout<<"a média das idades das pessoas com altura inferior a 1,50m : "<<soma/mediaAltura<<"\n";
	cout<<"existem "<<qntdMaiorQ50<<" pessoas acima de 50 anos e com peso inferior a 60Kg\n";
	
	cout<<"a porcentagem de pessoas com olhos azuis de todas as pessoas analisadas "<<(olhosAzuis*100)/6<<"% \n";
	cout<<"quantidade de pessoas ruivas que não possuem olhos azuis: "<<ruivoSemAzul<<"\n";
	
	return 0;
}


#include <iostream>
using namespace std;
#include<locale.h>
#include<string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	int sim=0,nao=0,simMulher=0,naoHomem=0,simHomem=0;
	string resposta[10],sexo[10];
	for(int i=0;i<10;i++){
		cout<<"informe o sexo da "<<i+1<<"� pessoa (M / F)\n";
		cin>>sexo[i];
		cout<<"informe a resposta desta pessoa (S-sim / N-n�o)\n";
		cin>>resposta[i];
		if(resposta[i]=="S"){
			sim+=1;
			if(sexo[i]=="F"){
			simMulher+=1;
			}else{
				simHomem+=1;
			}
		}else{
			nao+=1;
			if(sexo[i]=="M"){
			naoHomem+=1;
			}
		}
		
		
	}
	
	cout<<sim<<" pessoas responderam sim\n";
	cout<<nao<<" pessoas responderam n�o\n";
	cout<<simMulher<<" mulheres responderam sim\n";
	cout<<(naoHomem*100)/(naoHomem+simHomem)<<"% dos homens responderam n�o";
	return 0;
}

#include <iostream>
using namespace std;
#include<locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");

  	int pessoasIdade[8],faixaEtaria[5]={0,0,0,0,0};

	for(int i =0;i<8;i++){
		cout<<"informe a idade da "<<i+1<<"� pessoa:"<<endl;
		cin>>pessoasIdade[i];
	}
	
	for(int i=0;i<8;i++){
	if(pessoasIdade[i]<=15){
		faixaEtaria[0]+=1;
	}else if(pessoasIdade[i]>=16 && pessoasIdade[i]<=30){
		faixaEtaria[1]+=1;
	}else if(pessoasIdade[i]>=31 && pessoasIdade[i]<=45){
		faixaEtaria[2]+=1;
	}else if(pessoasIdade[i]>=46 && pessoasIdade[i]<=60){
		faixaEtaria[3]+=1;
	}else if(pessoasIdade[i]>60){
		faixaEtaria[4]+=1;
	}
	}
	cout<<"------------------------------------\n";
	for(int i=0;i<5;i++){
		cout<<"faixa �taria "<<i+1<<"� -"<<faixaEtaria[i]<<endl;
	}
	cout<<"------------------------------------\n";
	
	cout<<"pessoas na primeira faixa et�ria - "<<(faixaEtaria[0]*100)/8<<"%"<<endl;
	cout<<"pessoas na ultima faixa et�ria - "<<(faixaEtaria[4]*100)/8<<"%"<<endl;
	return 0;
}

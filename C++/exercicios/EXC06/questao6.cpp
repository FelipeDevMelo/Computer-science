#include <iostream>
#include<string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string acao;
	
	float precoCompra,precoVenda,lucro,lucroSup,lucroInf,lucroTotal;
	
	while(acao !="f"){
		
		cout<<"informe qualo tipo da acao:\n";
		cin>>acao;
		cout<<"informe seu preco de compra:\n";
		cin>>precoCompra;
		cout<<"informe seu preco de venda:\n";
		cin>>precoVenda;
		lucro=precoVenda-precoCompra;
		cout<<"lucro dessa acao:"<<lucro<<"\n";
		if(lucro>1000){
			lucroSup+=1;
			
		}else if(lucro<200){
			lucroInf+=1;
		}
		
		lucroTotal+=lucro;
		
	}
	cout<<lucroSup<<" acoes com lucro superior a R$1000,00\n";
	cout<<lucroInf<<" acoes com lucro inferior a R$200,00\n";
	cout<<"lucro total: "<<lucroTotal;
	
	
	return 0;
}

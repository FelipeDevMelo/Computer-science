#include <iostream>
#include <locale.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	int codigo, quant;
	cout<<"Quantas unidades você deseja adquiir?\n";
	cin>>quant;
	cout<<"Qual código se caracteriza seu produto?\n";
	cout<<"1 - 01 a 10.\n2 - 11 a 20.\n3 - 21 a 30.\n4 - 31 a 40.\n";
	cin>>codigo;
	
	switch(codigo){
		
		case 1:{
			
	
			int preco1 = quant*10;
			cout<<"O preço é: "<<preco1<<"";
				if(preco1<250){
		        cout<<"Você tem desconto de 5%. Fica o total de: " <<preco1-(preco1*0.05);
	            }
	            else if(preco1>=250 && preco1<=500){
		        cout<<"Você tem desconto de 10%. Fica o total de: " <<preco1-(preco1*0.1);
	            }
	            else{
		        cout<<"Você tem desconto de 15%. Fica o total de: " <<preco1-(preco1*0.15);
	            }
		break;}
		case 2:{
			
		    int preco2 = quant*15;
			cout<<"O preço é: "<<preco2<<"";
				if(preco2<250){
		        cout<<"Você tem desconto de 5%. Fica o total de: " <<preco2-(preco2*0.05);
	            }
	            else if(preco2>=250 && preco2<=500){
		        cout<<"Você tem desconto de 10%. Fica o total de: " <<preco2-(preco2*0.1);
	            }
	            else{
		        cout<<"Você tem desconto de 15%. Fica o total de: " <<preco2-(preco2*0.15);
	            }
		break;}
		case 3:{
		
		    int preco3 = quant*20;
			cout<<"O preço é: "<<preco3<<"";
				if(preco3<250){
		        cout<<" Você tem desconto de 5%. Fica o total de: " <<preco3-(preco3*0.05);
	            }
	            else if(preco3>=250 && preco3<=500){
		        cout<<" Você tem desconto de 10%. Fica o total de: " <<preco3-(preco3*0.1);
	            }
	            else{
		        cout<<" Você tem desconto de 15%. Fica o total de: " <<preco3-(preco3*0.15);
	            }
			break;}
		case 4:{
			
			    int preco4 = quant*30;
		       	cout<<"O preço é: "<<preco4<<"";
				if(preco4<250){
		        cout<<" Você tem desconto de 5%. Fica o total de: " <<preco4-(preco4*0.05);
	            }
	            else if(preco4>=250 && preco4<=500){
		        cout<<" Você tem desconto de 10%. Fica o total de: " <<preco4-(preco4*0.1);
	            }
	            else{
		        cout<<" Você tem desconto de 15%. Fica o total de: " <<preco4-(preco4*0.15);
	            }
			break;}
		default:
			cout<<"Código inválido!";
			
	}

	
	return 0;
}

#include <iostream>
#include<string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int idade=1,maiorIdade,menorIdade;
	float salario,salarios,salarioMulher,menorSalario,maiorSalario,idademenor,mediaSalario;
	string sexo,menorSexo;
	
	
	while(idade<0){
		cout<<"informe a idade para pesquisa\n";
		cin>>idade;
		cout<<"informe o sexo\n";
		cin>>sexo;
		cout<<"informe o salario\n";
		cin>>salario;
		
		if(sexo == "F" && salario<=200){
			salarioMulher+=1;
		}
		
		if(idade>maiorIdade){
			maiorIdade=idade;
		}else{
			menorIdade=idade;
		}
		
		if(salario>maiorSalario){
			maiorSalario=salario;
		}else{
			menorSalario=salario;
			menorSexo=sexo;
			idademenor=idade;
		}
		
		
		
		salarios+=salario;
		mediaSalario+=1;		
		
		
		
	}
	
	cout<<"media dos salarios: "<<salarios/mediaSalario<<"\n";
	cout<<"maior idade: "<<maiorIdade<<" menor idade: "<<menorIdade<<"\n";
	cout<<"mulheres com salrio ate R$200,00"<< salarioMulher<<"\n";
	cout<<"a idade e o sexo da pessoa que possui o menor salario: "<<idademenor<<" "<<menorSexo<<"\n";
	
	
	return 0;
}

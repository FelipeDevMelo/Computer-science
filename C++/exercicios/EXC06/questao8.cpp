#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int opcao;
	float voto1,voto2,voto3,voto4,vnulo,vbranco;
	
	do
	{
		cout<<"1-candidato 1\n2-candidato 2\n3-candidato 3\n4-candidato 4\n5-voto nulo\n6-voto em branco\n";
		cin>>opcao;
		switch(opcao){
			case 1:
				voto1+=1;
				break;
			
			case 2:
				voto2+=1;
				
			
				break;
			case 3:
				voto3+=1;
				
			
				break;
			case 4:
				voto4+=1;
				
			
				break;
			case 5:
				vnulo+=1;
				
			
				break;
			case 6:
				vbranco+=1;
				
			
				break;
			default:
				cout<<"opcao invalida\n";
		}
	}while(opcao != 0);
	
	cout<<"votos para candidato 1: "<<voto1 <<"\n";
	cout<<"votos para candidato 2: "<<voto2 <<"\n";
	cout<<"votos para candidato 3: "<<voto3 <<"\n";
	cout<<"votos para candidato 4: "<<voto4 <<"\n";
	cout<<"--------------------------------------\n";
	cout<<"votos nulos: "<< vnulo <<" | "<<(vnulo*100)/(voto1+voto2+voto3+voto4+vbranco+vnulo)<<"%\n";
	cout<<"votos em branco: "<<vbranco <<" | "<<(vbranco*100)/(voto1+voto2+voto3+voto4+vbranco+vnulo)<<"%\n";
	
	
	return 0;
}

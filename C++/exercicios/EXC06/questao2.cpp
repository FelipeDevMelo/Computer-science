#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int mediaIdades,idades,idade,opniao,regular,bom,i=0;
	
	while(i<15){
		cout<<"informe sua idade da "<<i+1<<" pessoa\n";
		cin>>idade;
		cout<<"informe sua opniao 1-regular | 2-bom | 3-otimo\n";
		cin>>opniao;
		switch(opniao){
			case 1:
				regular+=1;
				break;
			case 2:
				bom+=1;
				break;
			case 3:
				idades+=idade;
				mediaIdades+=1;
		}
		i++;
	}
	
	cout<<"media das idades das pessoas que responderam otimo: "<<idades/mediaIdades<<"\n";
	cout<<regular<< " responderam regular\n";
	cout<<"a percentagem de pessoas que responderam bom foi: "<<(bom*100)/15<<"%";
	
	return 0;
}

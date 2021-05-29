#include <iostream>
using namespace std;
#include <bits/stdc++.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int numeros1D[20];
	int k=0;
	int numeros2D[5][4];
	
	//lendo os grupos
	for(int i=0;i<5;i++){
		cout<<"grupo "<<i+1<<"\ninforme o "<<i<<"o numero\n";
		for(int j=0;j<4;j++){
			cin>>numeros2D[i][j];
			numeros1D[k]=numeros2D[i][j];
			k++;
		}
	}
	cout<<"---------------------------\n";
	//mostrando os grupos na ondem colocada
	for (int i = 0; i < 5; i++) {

        
        for (int j = 0; j < 4; j++) {
            cout << "[" << i << "][" << j << "] = " << numeros2D[i][j] << endl;
        }
    }
	cout<<"---------------------------\n";
		cout<<"Ordem crescente\n";
    //mostrando em ordem crescente
    int n =sizeof(numeros1D)/sizeof(numeros1D[0]);
    sort(numeros1D,numeros1D+n);
	for(int i=0;i<20;i++){
		cout<<numeros1D[i]<<"\n";
	}
	cout<<"---------------------------\n";
	cout<<"Ordem decrescente\n";
    //mostrando em ordem decrescente
    int n2 =sizeof(numeros1D)/sizeof(numeros1D[0]);
    sort(numeros1D,numeros1D+n2,greater<int>());
	for(int i=0;i<20;i++){
		cout<<numeros1D[i]<<"\n";
	}
    
    
	return 0;
}

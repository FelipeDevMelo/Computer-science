#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int horas,minutos;
	cout<<"calcule as horas em minutos\n";
	cout<< "informe as horas\n";
	cin >>  horas;
	cin>>  minutos;
	cout << (horas*60)+minutos<<" minutos "<<" ou " << ((horas*60)+minutos)*60<<" segundos";
	
	return 0;
}

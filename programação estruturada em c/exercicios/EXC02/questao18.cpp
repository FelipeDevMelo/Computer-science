#include <iostream>
using namespace std;
#include<math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float celsius;
	cout<<"converta Celsius em fahrenheit\n";
	cout<<"informe a temperatura em C\n";
	cin>>celsius;
	cout<<celsius<<"Cº = "<<(((celsius*9)+160)/5)<<"Fº";
	
	
	
	
	return 0;
}

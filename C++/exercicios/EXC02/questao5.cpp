#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float precoProduto,novoPrecoProduto;
	cout<<"informe o preco do produto\n";
	cin >> precoProduto;
 	novoPrecoProduto=precoProduto-(precoProduto*0.1);
	cout<<"seu produto com desconto de 10%  fica: "<<novoPrecoProduto;
	
	
	return 0;
}

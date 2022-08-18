#include <iostream>  // padrão de entrada e saída no C++
using namespace std; // para usar bibliotecas

int main()
{
	double valor;
	int inteira,decimal;  
	int n100, n50, n20, n10, n5, n2, n1, m50, m25, m10, m5, m1;
	
	while(cin >> valor){
		valor *= 100;
		inteira = valor/100;
		valor-= (inteira*100);
		decimal = valor;
		
		
		n100 = inteira / 100;
		inteira = inteira % 100;

		n50 = inteira / 50;
		inteira = inteira % 50;

		n20 = inteira / 20;
		inteira = inteira % 20;

		n10 = inteira / 10;
		inteira = inteira % 10;

		n5 = inteira / 5;
		inteira = inteira % 5;

		n2 = inteira / 2;
		inteira = inteira % 2;
		  
		n1 = inteira;

		m50 = decimal / 50;
		decimal = decimal % 50;
		
		m25 = decimal / 25;
		decimal = decimal % 25;

		m10 = decimal / 10;
		decimal = decimal % 10;

		m5 = decimal / 5;
		decimal = decimal % 5;

		m1 = decimal;
		
		cout << "NOTAS:" << endl;
		cout << n100 << " nota(s) de R$ 100.00" << endl;
		cout << n50 << " nota(s) de R$ 50.00" << endl;
		cout << n20 << " nota(s) de R$ 20.00" << endl;
		cout << n10 << " nota(s) de R$ 10.00" << endl;
		cout << n5 << " nota(s) de R$ 5.00" << endl;
		cout << n2 << " nota(s) de R$ 2.00" << endl;
		cout << "MOEDAS:" << endl;
		cout << n1 << " moeda(s) de R$ 1.00" << endl;
		cout << m50 << " moeda(s) de R$ 0.50" << endl;
		cout << m25 << " moeda(s) de R$ 0.25" << endl;
		cout << m10 << " moeda(s) de R$ 0.10" << endl;
		cout << m5 << " moeda(s) de R$ 0.05" << endl;
		cout << m1 << " moeda(s) de R$ 0.01" << endl;
	}
	return 0;
}
#include <iostream>  // padrão de entrada e saída no C++
#include <iomanip>
using namespace std; // para usar bibliotecas

int main()
{
	float x, sal, rea;
	cin >> x;
	if( x >=0 && x <= 400.00)
	{
		sal = x * 1.15;
		rea = sal - x;
		cout << fixed << setprecision(2);
		cout << "Novo salario: " << sal << endl;
		cout << "Reajuste ganho: " << rea << endl;
		cout << "Em percentual: 15 %" << endl;
	}
	else if(x>400.00 && x <= 800.00)
	{
		sal = x * 1.12;
		rea = sal - x;
		cout << fixed << setprecision(2);
		cout << "Novo salario: " << sal << endl;
		cout << "Reajuste ganho: " << rea << endl;
		cout << "Em percentual: 12 %" << endl;
	}
	else if(x>800.00 && x <= 1200.00)
	{
		sal = x * 1.10;
		rea = sal - x;
		cout << fixed << setprecision(2);
		cout << "Novo salario: " << sal << endl;
		cout << "Reajuste ganho: " << rea << endl;
		cout << "Em percentual: 10 %" << endl;
	}
	else if(x>1200.00 && x <= 2000.00)
	{
		sal = x * 1.07;
		rea = sal - x;
		cout << fixed << setprecision(2);
		cout << "Novo salario: " << sal << endl;
		cout << "Reajuste ganho: " << rea << endl;
		cout << "Em percentual: 7 %" << endl;
	}
	else if (x>2000.00)
	{
		sal = x * 1.04;
		rea = sal - x;
		cout << fixed << setprecision(2);
		cout << "Novo salario: " << sal << endl;
		cout << "Reajuste ganho: " << rea << endl;
		cout << "Em percentual: 4 %" << endl;
	}
	return 0;
}

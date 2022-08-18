#include <iostream>  // padrão de entrada e saída no c++
using namespace std; // para usar bibliotecas
int main()
{
	float num;
	cin>>num;
	if(num>=0 && num <=25)
		cout<<"Intervalo [0,25]"<<endl;
	if(num>25 && num <=50)
		cout<<"Intervalo (25,50]"<<endl;
	if(num>50 && num <=75)
		cout<<"Intervalo (50,75]"<<endl;
	if(num>75 && num <=100)
		cout<<"Intervalo (75,100]"<<endl;
	if (num<0 || num>100)
		cout<<"Fora de intervalo"<<endl;
		return 0;
}
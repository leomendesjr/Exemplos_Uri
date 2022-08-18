#include <iostream>  // padrão de entrada e saída no c++
#include <cmath>     // inclui funções matemáticas
#include <iomanip>	 // inclui funções de configuração de saída

using namespace std; // para usar bibliotecas

int main()
{
	double a,b,c,delta,r1,r2;
	cin>>a>>b>>c;
	delta=pow(b,2)-4*a*c;
	if(delta<0 || a==0)
		cout<<"Impossivel calcular"<<endl;
	else{
		r1=((-b)+sqrt(delta))/(2*a);
		r2=((-b)-sqrt(delta))/(2*a);
		cout<<fixed<<setprecision(5);
		cout<<"R1 = "<<r1<<endl;
		cout<<"R2 = "<<r2<<endl;
	  }	
	return 0;
}
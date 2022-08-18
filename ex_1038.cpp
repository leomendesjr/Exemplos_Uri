#include <iostream>  // padrão de entrada e saída no c++
#include <iomanip>
using namespace std; // para usar bibliotecas
int main()
{
	int quant,prod;
	float c1,c2,c3,c4,c5;
	cin>>prod>>quant;
	cout<<fixed<<setprecision(2);
	if(prod==1){
		c1=quant*4.00;
		cout<<"Total: R$ "<<c1<<endl;
	}
	if(prod==2){
		c2=quant*4.50;
	cout<<"Total: R$ "<<c2<<endl;
	}
	if(prod==3){
		c3=quant*5.00;
		cout<<"Total: R$ "<<c3<<endl;
	}
	if(prod==4){
		c4=quant*2.00;
		cout<<"Total: R$ "<<c4<<endl;
	}
	if(prod==5){
		c5=quant*1.50;
		cout<<"Total: R$ "<<c5<<endl;
	}
		return 0;
}
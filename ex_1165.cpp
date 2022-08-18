#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
int main(){

    float resto;
    float n;
    int i, cont, t, y, z;

    cin>>z;
    for (y = 0; y < z; y++){
        cin>>n;
        t = abs(n);

        cont = 0;
        for (i = 1; i <= sqrt(t); i++){
            resto = t % i;
            if (resto == 0){
               cont++;
            }
        }
        if (cont >= 2){
           cout<<n<<" nao eh primo"<<endl;
        }
        else if (n == 0 || n == 1 || n == -1){
                cout<<n<<" nao eh primo"<<endl;
        }
            else {
             cout<<n<<" eh primo"<<endl;
        }
    }

    return 0;

}
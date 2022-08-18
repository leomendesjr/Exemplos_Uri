#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float n;
    for(int i = 0; i < 100; i++){
            cin >> n;
            if(n <= 10) 
            cout <<fixed<<setprecision(1)<< "A[" << i << "] = " << n << endl;
    }
    return 0;
}
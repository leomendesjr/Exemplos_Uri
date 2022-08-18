#include <iostream>
using namespace std;
int main()
{
   int N,a;
    cin>>N;
    for(a=1;a<=N;a++)
    {
        if(N%a==0)
            cout<<a<<endl;
    }
    return 0;
}
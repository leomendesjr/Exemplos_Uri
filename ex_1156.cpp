#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float a,b=1,c, S=0;
    for(a=1; a<=39; a+=2)
    {
        c=a/b;
        S+=c;
        b*=2;
    }
    cout<<fixed<<setprecision(2);
    cout<<S<<endl;
    return 0;
}
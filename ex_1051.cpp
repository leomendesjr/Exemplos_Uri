#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
        double sal, a, A, resp;
        cin >> sal;
        if(sal <= 2000.00)
        {
                cout << "Isento" << endl;
        }
        else if(sal >= 2000.01 && sal <= 3000.00)
        {
                a = sal - 2000.00;
                resp = a * 0.08;
                cout << fixed << setprecision(2);
                cout << "R$ " << resp << endl;
        }
        else if(sal >= 3000.01 && sal <= 4500.00)
        {
                a = sal - 3000.01;
                resp = a * 0.18;
                resp += 1000 * 0.08;
                cout << fixed << setprecision(2);
                cout << "R$ " << resp << endl;
        }
        else
        {
                a = sal - 4500.00;
                resp = a * 0.28;
                resp += 1500 * 0.18;
                resp += 1000 * 0.08;
                cout << fixed << setprecision(2);
                cout << "R$ " << resp << endl;
        }
    return 0;
}
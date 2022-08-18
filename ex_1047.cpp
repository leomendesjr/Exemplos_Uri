#include <iostream>
using namespace std;
int main()
{
    int Hora_inicio, final, minuto_inicio, minuto_final, tempo_horatotal, tempo_minutototal;
    cin>>Hora_inicio>>minuto_inicio>>final>>minuto_final;

    tempo_horatotal = final - Hora_inicio;

    if (tempo_horatotal < 0)
    {
        tempo_horatotal = 24 + (final - Hora_inicio);
    }

    tempo_minutototal = minuto_final - minuto_inicio;
    if (tempo_minutototal < 0)

    {
    tempo_minutototal = 60 + (minuto_final - minuto_inicio);
    tempo_horatotal--;
    }

    if (Hora_inicio == final && minuto_inicio == minuto_final)
    {
        cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
    }
    else cout<<"O JOGO DUROU " <<tempo_horatotal<<" HORA(S) E "<<tempo_minutototal<<" MINUTO(S)"<<endl;;
    return 0;
}

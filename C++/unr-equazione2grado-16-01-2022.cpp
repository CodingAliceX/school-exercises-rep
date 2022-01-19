//Equazioni di Secondo Grado (By Alice xoxo).

#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

//Headers.

string toString (double);
int toInt (string);
double toDouble (string);

int main()
{
    double coefa, coefb, coefc, delta, sol1, sol2;
    int forc;
    string messaggio;
    cout << "Quante operazioni di equazioni di secondo grado sono?" << endl;
    cin >> forc;
    while (forc <= 0)
    {
        cout << "Numero di operazioni non valido reinserire! (N Operazioni > 0)" << endl;
        cin >> forc;
    }
    for (int i = forc; i > 0; i--)
    {
        cout << "Inserire il coefficiente della x al quadrato" << endl;
        cin >> coefa;
        cout << "Inserisci il coefficiente della x" << endl;
        cin >> coefb;
        cout << "Inserisci il coefficiente del termine noto" << endl;
        cin >> coefc;
        if (coefa == 0)
        {
            if (coefb == 0)
            {
                if (coefc == 0)
                {
                    messaggio = "E' una equazione di primo grado indeterminata";
                }
                else
                {
                    messaggio = "E' una equazione di primo grado impossibile";
                }
            }
            else
            {
                sol1 = -coefc / coefb;
                messaggio = string("La soluzione dell'equazione di primo grado e' ") + toString(sol1);
            }
        }
        else
        {   
            delta = coefb * coefb - 4 * coefa * coefc;
            if (delta < 0)
            {
                messaggio = "L'equazione di secondo grado non ha soluzioni nel campo reale";
            }
            else if (delta == 0)
            {
                sol1 = -coefb / (2 * coefa);
                messaggio = string("Le soluzioni dell'equazione di secondo grado sono reali e coincidenti e sono uguali a ") + toString(sol1);
            }
            else
            {
                sol1 = (-coefb - sqrt(delta)) / (2 * coefa);
                sol2 = (-coefb + sqrt(delta)) / (2 * coefa);
                messaggio = string("Le soluzioni dell'equazione di secondo grado sono reali e distinte e sono uguali a ") + toString(sol1) + " e " + toString(sol2);
            }
        }
        cout << messaggio << endl;
    }
    system("pause");
    return(0);
}

// Implementazioni di funzioni di conversione.

string toString (double value) 
{   
    //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) 
{
    return atoi(text.c_str());
}

double toDouble (string text) 
{
    return atof(text.c_str());
}

//EOF.

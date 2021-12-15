#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int ndays, arrayd[50000];
    float wmedia = 0 , media = 0;
    cout << "Inserisci il numero di giorni: ";
    cin >> ndays;
    while(ndays < 0)
    {
        cout << "[ERRORE] Valore non valido reinserire: ";
        cin >> ndays;
    }

    for (int i = 0; i < ndays ; i++ )
    {
        cout << "Inserisci Decessi: ";
        cin >> arrayd[i];
        while(arrayd[i] < 0)
        {
            cout << "[ERRORE} Reinserire decessi: ";
            cin >> arrayd[i];
        }
        wmedia = wmedia + arrayd[i];
    }

    for (int i = 0; i < ndays ; i++ )
    {
        cout << "Decessi Giorno " << i << ": " << arrayd[i] << endl;
    }

    media = wmedia / ndays;
    int smallest_element = *min_element(arrayd,arrayd + ndays);

    int i=0;
    bool trovato = false;
    while(i < ndays && !trovato)
    {
        if(arrayd[i] == smallest_element)
        {
             trovato = true;
        }
        else
        {
            i++;
        }
    }

    cout << "I decessi medi sono: " << media << endl;
    cout << "Il minor numero di decessi e' stato: " << smallest_element << " nel Giorno: " << i << endl;
    cout << "Decessi totali: " << wmedia << endl;
    system("pause");
    return(0);
}
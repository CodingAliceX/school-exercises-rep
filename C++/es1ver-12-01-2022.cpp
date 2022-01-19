#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int trn, scor, tval, vit = 0, dif, tcount, simpvit = 10, addimport = 0;
    cout << "Inserisci il numero di turni (fra 3 e 10): ";
    cin >> trn;

    while(trn < 3 || trn > 10)
    {
        cout << "Reinserire: ";
        cin >> trn;
    }

    tcount = trn;

    for(int cfor1 = trn ; cfor1 != 0 ; cfor1--)
    {
        srand(time(0));
        scor = (rand() % 150) + 1;
        cout << "Inserisci il numero (fra 1 e 150): ";
        cin >> tval;

        while(tval < 1 || tval > 150)
        {
            cout << "Reinserire: ";
            cin >> tval;
        }

        dif = scor - tval;

        if(tval > scor - 10 && tval < scor + 10)
        {
            vit++;
            cout << "TURNO " << tcount << endl;
            cout << "Numero Generato: " << scor << endl;
            cout << "Numero Utente: " << tval << endl;
            cout << "L'Utente ha vinto perche' la differenza e' :" << dif << endl;
        }
        else
        {
            cout << "TURNO " << tcount << endl;
            cout << "Numero Generato: " << scor << endl;
            cout << "Numero Utente: " << tval << endl;
            cout << "L'Utente ha perso perche' la differenza e' :" << dif << endl;
        }
    }

    if(vit == trn)
    {
        addimport = trn;
        addimport = addimport * 2;
        simpvit = simpvit + addimport;
        cout << "Hai vinto" << endl;
        cout << "EURO: " << simpvit;
    }
    else
    {
        cout << "Hai perso" << endl;
        cout << "Turni vinti: " << vit;
    }

    return(0);
}


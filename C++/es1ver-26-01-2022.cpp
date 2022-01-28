#include <iostream>

using namespace std;

int main()
{
    int nclassi;
    int nposiv[nclassi];

    cout << "Inserisci il numero di classi: ";
    cin >> nclassi;

    while(nclassi <= 0)
    {
        cout << "Reinserire: ";
        cin >> nclassi;
    }

    for(int i = 0;i < nclassi;i++)
    {
        cout << "Inserire i positivi per classe" << "(" << i << ")" << ": ";
        cin >> nposiv[i];

        while(nposiv[i] < 0)
        {
            cout << "Reinserire: ";
            cin >> nposiv[i];
        }
    }

    int nmenu;

    do
    {
        cout << "###############################################" << endl;
        cout << "# 1: Stampa numero totale positivi per classe #" << endl;
        cout << "#                                             #" << endl;
        cout << "# 2: Calcolo e stampa positivi totale         #" << endl;
        cout << "#                                             #" << endl;
        cout << "# 3: Massimo Positivi                         #" << endl;
        cout << "#                                             #" << endl;
        cout << "# 4: Aggiunta positivo                        #" << endl;
        cout << "#                                             #" << endl;
        cout << "# 5: Calcolo lezioni a distanza               #" << endl;
        cout << "#                                             #" << endl;
        cout << "# 6: Verifica classi con 0 positivi           #" << endl;
        cout << "#                                             #" << endl;
        cout << "# 7: Uscita                                   #" << endl;
        cout << "###############################################" << endl;
        cout << "" << endl;
        cout << "Inserisci un numero: " << endl;
        cin >> nmenu;

        while (nmenu < 1 & nmenu > 7)
        {
            cout << "Reinserire: ";
            cin >> nmenu;
        }

        int totpos = 0;
        int max = 0;
        int pos = 0;
        int possc;

        switch(nmenu)
        {
            case 1:

            for(int i2 = 0;i2 < nclassi;i2++)
            {
                cout << "Positivi della classe " << "(" << i2 << "): " << nposiv[i2] << endl;
            }

            break;

            case 2:

            for(int i3 = 0;i3 < nclassi;i3++)
            {
                totpos = totpos + nposiv[i3];
            }

            cout << "Positivi totali: " << totpos << endl;

            break;

            case 3:

            for(int i6 = 0;i6 < nclassi;i6++)
            {
                if(nposiv[i6] > max)
                {
                    max = nposiv[i6];
                    pos = i6;
                }
            }

            cout << "La classe con piu' positivi e' " << "(" << pos << ") " << "con " << max << " positivi" << endl;

            break;

            case 4:

            cout << "Scegliere posizione: ";
            cin >> possc;
            
            while(possc < nclassi & possc > nclassi)
            {
                cout << "Reinserire: " << endl;
                cin >> possc;
            }

            cout << "Aggiornamento positivi classe " << "(" << possc << "): ";
            cin >> nposiv[possc];

            while(nposiv[possc] < 0)
            {
                cout << "Reinserire: ";
                cin >> nposiv[possc];
            }

            break;

            case 5:

            for(int i4 = 0;i4 < nclassi;i4++)
            {
                if(nposiv[i4] >= 3)
                {
                    cout << "La classe " << "(" << i4 << ") " << "sara' a distanza" << endl;
                }
            }

            break;

            case 6:

            for(int i5 = 0;i5 < nclassi;i5++)
            {
                if(nposiv[i5] == 0)
                {
                    cout << "La classe " << "(" << i5 << ") " << "non ha positivi" << endl;
                }
            }

            break;

            case 7:
            break;
        }

    }while(nmenu != 7);

    return(0);
}

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    int i4 = 0, min, nm500 = 0, op5c, posmin, nmenu, medsem = 0, cflag = 0, op3c = 0;
    string arrmesi[12] = {"Gennaio", "Febbraio", "Marzo", "Aprile", "Maggio", "Giugno", "Luglio", "Agosto", "Settembre", "Ottobre", "Novembre", "Dicembre"};
    int arrbigl[12];
    for(int i = 0;i < 12;i++)
    {
        cout << "Inserisci il numeri di bigletti di " << arrmesi[i] << ":";
        cin >> arrbigl[i];
        cout << "" << endl;
    }

    do
    {
        if(cflag == 0)
        {
            cout << "______________________________________________________________________" << endl;
            cout << "I                            MENU                                    I" << endl;
            cout << "I                                                                    I" << endl;
            cout << "I    1  | Stampa dei biglietti di ogni mese                          I" << endl;
            cout << "I    2  | Calc e Stamp Media Bigl Sec Semestre                       I" << endl;
            cout << "I    3  | Primo mese in cui sono stati venduti piu' di 100 biglietti I" << endl;
            cout << "I    4  | Mese con meno biglietti                                    I" << endl;
            cout << "I    5  | Aggiornamento num biglietti mese                           I" << endl;
            cout << "I    6  | Calc e Stamp Numero mesi con biglietti sopra 500           I" << endl;
            cout << "I    7  | For exit program                                           I" << endl;
            cout << "I                                                                    I" << endl;
            cout << "I____________________________________________________________________I" << endl;
            cout << "" << endl;
            cout << "Immettere il numero di menu: ";
            cin >> nmenu;
        }
        else
        {
            cout << "Immettere il numero di menu: ";
            cin >> nmenu;
            cflag = 0;
        }
    
        switch(nmenu)
        {
            case 1:
            cout << "OPZIONE UNO" << endl;
            cout << "" << endl;

            for(int i2 = 0;i2 < 12;i2++)
            {
                cout << "Mese " << arrmesi[i2] << ": " << arrbigl[i2] << endl;
                cout << "" << endl;
            }
            break;

            case 2:
            cout << "OPZIONE DUE" << endl;
            cout << "" << endl;

            for(int i3 = 6;i3 < 12;i3++)
            {
                medsem = medsem + arrbigl[i3];
            }

            medsem = medsem / 6;
            cout << "La media e': " << medsem << endl;
            break;

            case 3:
            cout << "OPZIONE TRE" << endl;
            cout << ""  << endl;

            do
            {
                i4++;
                if(arrbigl[i4] > 100)
                {
                    op3c = 1;
                    cout << "Il primo mese con piu' di 100 biglietti e' " << arrmesi[i4] << " con " << arrbigl[i4] << " biglietti" << endl;
                    cout << "" << endl;
                }
            } while (arrbigl[i4] < 100);
            
            if(op3c == 0)
            {
                cout << "Nessun mese ha piu' di cento biglietti" << endl;
            }
            break;

            case 4:
            cout << "OPZIONE QUATTRO" << endl;
            cout << "" << endl;

            min = arrbigl[0];

            for(int i5 = 0;i5 < 12;i5++)
            {            
                if(min > arrbigl[i5])
                {
                    min = arrbigl[i5];
                    posmin = i5;
                }
            }
            cout << "Il mese con meno biglietti e' " << arrmesi[posmin] << " con " << min << endl;
            break;

            case 5:
            cout << "OPZIONE CINQUE" << endl;
            cout << "" << endl;
            cout << "Inserisci il numero del mese per aggiornare: ";
            cin >> op5c;

            while(op5c < 0 || op5c >= 12)
            {
                cout << "Non valido reinserire: ";
                cin >> op5c;
            }

            cout << "Inserisci il numero di biglietti del mese " << arrmesi[op5c] << " : ";
            cin >> arrbigl[op5c];

            while (arrbigl[op5c] < 0)
            {
                cout << "Non valido reinserire: ";
                cin >> arrbigl[op5c];
            }
            break;

            case 6:
            cout << "OPZIONE SEI" << endl;
            cout << "" << endl;

            for(int i6 = 0;i6 < 12;i6++)
            {
                if(arrbigl[i6] > 500)
                {
                    cout << "Mese " << arrmesi[i6] << " con " << arrbigl[i6] << endl;
                    cout << "" << endl;
                    nm500++;
                }
            }
            cout << "Totale mesi: " << nm500 << endl;
            break;

            case 7:
            cout << "BYE <3" << endl;
            break;

            default:
            cout << "Valore non valido" << endl;
            cflag = 1;
            break;
        }
    } while (nmenu != 7);
    return(0);
}
// Operazioni di sistemi lineari 2x2 con cramer by Alice UwU

#include <iostream>

using namespace std;

int main()
{
    double coeffx1, coeffy1, noto1, coeffx2, coeffy2, noto2, delta, deltax, deltay, x, y;
    int tc;
    cout << "Inserisci il numero di sistemi lineari 2x2: " << endl;
    cin >> tc;
    while(tc <= 0)
    {
        cout << "Reinserire (NO > 0): " << endl;
        cin >> tc;
    }
    for(int i = tc;i != 0;i--)
    {
        cout << "Immetti coeffx1: " << endl;
        cin >> coeffx1;
        cout << "Immetti coeffy1: " << endl;
        cin >> coeffy1;
        cout << "Immetti noto1: " << endl;
        cin >> noto1;
        cout << "Immetti coeffx2: " << endl;
        cin  >> coeffx2;
        cout << "Immetti coeffy2: " << endl;
        cin >> coeffy2;
        cout << "Immetti noto2: " << endl;
        cin >> noto2;

        delta = (coeffx1 *  coeffy2) - (coeffy1 * coeffx2);

        deltax = (noto1 * coeffy2) - (coeffy1 * noto2);

        deltay = (coeffx1 * noto2) - (noto1 * coeffx2);

        x = deltax / delta;
        
        y = deltay / delta;

        if(delta != 0)
        {
            cout << "Il sistema è determinato" << endl;
            cout << "X = " << x << " Y = " << y << endl;
        }
        else if(deltax != 0)
        {
            cout << "Il sistema è impossibile" << endl;
        }
        else if(deltay != 0)
        {
            cout << "Il sistema è impossibile" << endl;
        }
        else
        {
            cout << "Il sistema è indeterminato" << endl;
        }
    }
    return(0);
}

#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int ivalue = 10;

    struct products
    {
        string pname[ivalue];
        float price[ivalue];
        int pquant[ivalue];
    };

    products p;
    
    for(int i = 0;i < ivalue;i++)
    {
        cout << "Inserisci il nome del prodotto N: " << i << " : ";
        cin >> p.pname[i];
        cout << endl;
        cout << "Inserisci il prezzo del prodotto N: " << i << " : ";
        cin >> p.price[i];
        cout << endl;
        cout << "Inserisci la quantita del prodotto N: " << i << " : ";
        cin >> p.pquant[i];
        cout << endl;
    }

    float min = p.price[0];
    int minind;

    for(int i = 0;i < ivalue;i++)
    {
        if(min > p.price[i])
        {
            min = p.price[i];
            minind = i;
        }
    }
    
    cout << "==========Prodotto piu' economico==========" << endl;
    cout << "Nome prodotto: " << p.pname[minind] << endl;
    cout << "Prezzo: " << p.price[minind] << endl;
    cout << "Quantita': " << p.pquant[minind] << endl;
    cout << "###########################################" << endl;

    return(0);
}
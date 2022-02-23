#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int ivalue = 5;
    int a[ivalue];
    int maxindx = 0;

    struct fruit
    {
        string nfruit[ivalue];
        int cal[ivalue];
    };

    fruit f;

    for(int i = 0;i < ivalue;i++)
    {
        cout << "Inserisci il nome del frutto: ";
        cin >> f.nfruit[i];
        cout << endl;
        cout << "Inserisci le calorie del frutto: ";
        cin >> f.cal[i];
        cout << endl;
        while(f.cal[i] <= 0)
        {
            cout << "Non Valido Reinserire Calorie: ";
            cin >> f.cal[i];
        }
    }

    int max = 0;

    for(int i = 1;i < ivalue;i++)
    {
        if(max < f.cal[i])
        {
            max = f.cal[i];
            maxindx = i;
        }
    }

    cout << "Il frutto fruttoso:" << endl;
    cout << "Frutto: " << f.nfruit[maxindx] << " Calorie: " << f.cal[maxindx] << endl;

    return(0);
}
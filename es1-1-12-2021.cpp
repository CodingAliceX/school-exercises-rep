#include <iostream>

using namespace std;

int main()
{
    int eta;
    cout << "Inserisci la tua eta':" << "\t";
    cin >> eta;
    while(eta <= 0)
    {
        cout << "Reinserire please!:" << "\t";
        cin >> eta;
    }
    if (eta >= 18)
    {
        cout << "Maggiorenne";
    }
    else
    {
        cout << "Minorenne";
    }
    return(0);
}

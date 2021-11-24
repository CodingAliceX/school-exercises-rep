#include <iostream>

using namespace std;

int main(){
    float ctemp, ftemp, ktemp;
    cout << "Inserire temperatura C° :";
    cin >> ctemp;
    while(ctemp < -273.15){                     //Keyboard Control for Prevent Temperature under The Zero Absolute.
        cout << "Reinserire temperatura C° :";
        cin >> ctemp;
    }
    ftemp = (9/5)*ctemp+32;
    ktemp = ctemp+273,15;
    cout << "La temperatura in gradi C° inserita erà :" << ctemp << endl;
    cout << "Da C° in F° diventa :" << ftemp << endl;
    cout << "Da C° in K° diventa :" << ktemp << endl;
    return(0);
}
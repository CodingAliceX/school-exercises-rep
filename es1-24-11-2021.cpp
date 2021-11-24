#include <iostream>

using namespace std;

int main(){
    int eta;
    char sex;
    cout << "Scrivi la tua età :"; 
    cin >> eta;
    while(eta <= 0 || eta >= 127) {
        cout << "Età non valida reinserire :";
        cin >> eta;
    }
    cout << "Inserisci il sesso (M o F) :";
    cin >> sex;
    while(sex != 'M' && sex != 'F' && sex != 'm' && sex != 'f') {
        cout << "Sesso non valido reinserire (M o F) :";
        cin >> sex;
    }
    cout << "La tua età è :" << eta;
    cout << "Il tuo sesso è :" << sex;
    return(0);   
}
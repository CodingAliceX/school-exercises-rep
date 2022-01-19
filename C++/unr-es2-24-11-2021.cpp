#include <iostream>

using namespace std;

int main(){
    int eta;
    cout << "Inserire l'età :";
    cin >> eta;
    while(eta <= 0 || eta > 127) {   //Keyboard control for user ages (AntiFake-UserAges)
        cout << "Reinserire l'età :";
        cin >> eta;
    }
    if(eta >= 18)
     cout << "Sei maggiorenne" << endl;
    else
     cout << "Sei minorennne" << endl;
    return(0);
}
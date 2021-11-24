#include <iostream>

using namespace std;

int main(){
    int num1, num2;
    cout << "Inserisci il primo numero :";
    cin >> num1;
    cout << "Inserisci il secondo numero :";
    cin >> num2;
    if(num1 > num2)
     cout << "Il numero uno : " << num1 << "\n" << "é Maggiore del secondo :" << num2 << endl;
    else
     cout << "Il numero uno : " << num1 << "\n" << "è Minore del secondo :" << num2 << endl;
    return(0);
}
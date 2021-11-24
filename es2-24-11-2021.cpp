#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3;
    char pnt = '*';
    cout << "Inserire il primo numero :";
    cin >> num1;
    cout << "Inserire il secondo numero :";
    cin >> num2;
    cout << "Inserire il terzo numero :";
    cin >> num3;
    int calcR1P1 = num1-num1, calcR1P2 = num1-num2, calcR1P3 = num1-num3, calcR2P1 = num2-num1, calcR2P2 = num2-num2, calcR2P3 = num2-num3, calcR3P1 = num3-num1, calcR3P2 = num3-num2, calcR3P3 = num3-num3;
    cout << pnt << '\t';
    cout << num1 << '\t';
    cout << num2 << '\t';
    cout << num3 << endl;
    cout << num1 << '\t' << calcR1P1 << '\t' << calcR1P2 << '\t' << calcR1P3 << endl;
    cout << num2 << '\t' << calcR2P1 << '\t' << calcR2P2 << '\t' << calcR2P3 << endl;
    cout << num3 << '\t' << calcR3P1 << '\t' << calcR3P2 << '\t' << calcR3P3 << endl;
    return(0);

}

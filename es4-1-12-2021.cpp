#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3, checkv;
    cout << "Inserire primo numero:" << "\t";
    cin >> num1;
    cout << "Inserire secondo numero:" << "\t";
    cin >> num2;
    cout << "Inserire terzo numero:" << "\t";
    cin >> num3;
    checkv = num3 - num2;
    if(checkv == num1)
    {
        cout << "e' una progressione aritmetica";
    }
    else
    {
        cout << "non e' una progressione aritmetica";
    }
    return(0);
}

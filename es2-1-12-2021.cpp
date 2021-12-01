#include <iostream>

using namespace std;

int main()
{
   int num1, num2, numd;
   cout << "Inserisci il numero:" << "\t";
   cin >> num1;
   cout << "Inserisci il multiplo:" << "\t";
   cin >> num2;
   numd = num1 % num2;
   if (numd != 0)
   {
       cout << "Non e' multiplo di: " << num2;
   }
   else
   {
       cout << "e' multiplo di: " << num2;
   }
   return(0);
}


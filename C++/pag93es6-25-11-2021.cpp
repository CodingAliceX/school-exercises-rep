#include <iostream>

using namespace std;

int main(){
	const float elire = 13.42, edollar = 1.12;
	float eur = 100, cclire, ccdollar;
	cout << "Il tuo saldo � : " << eur << "�" << endl;
	cclire = eur * elire;
	ccdollar = eur * edollar;
	cout << "La conversione EURO to LIRA � :" << cclire << endl;
	cout << "La conversione EURO to DOLLAR � :" << ccdollar << endl;
	return(0);
}

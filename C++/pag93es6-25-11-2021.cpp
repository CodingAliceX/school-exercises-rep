#include <iostream>

using namespace std;

int main(){
	const float elire = 13.42, edollar = 1.12;
	float eur = 100, cclire, ccdollar;
	cout << "Il tuo saldo è : " << eur << "€" << endl;
	cclire = eur * elire;
	ccdollar = eur * edollar;
	cout << "La conversione EURO to LIRA è :" << cclire << endl;
	cout << "La conversione EURO to DOLLAR è :" << ccdollar << endl;
	return(0);
}

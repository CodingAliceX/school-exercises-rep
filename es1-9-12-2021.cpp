#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int num, rnum, cco, rcnum, pcount = 0, dcount = 0;
	double dmedia = 0, pmedia = 0, numd = 0, nump = 0;
	srand(time(0));
	cout << "Inserisci un numero tra 10 e 20 :";
	cin >> num;
	while (num < 10 || num > 20)
	{
		cout << "Errore Reinserire: ";
		cin >> num;
	}
	cco = num;
	do
	{
		cco = cco - 1;
		rnum = rand() % (200 - 100 + 1) + 100;
		rcnum = rnum;
		rcnum = rcnum % 2;
		if (rcnum == 0)
		{
			pcount = pcount + 1;
			nump = nump + rnum;
		}
		else
		{
			dcount = dcount + 1;
			numd = numd + rnum;
		}
		cout << "Numero Generato: " << rnum << endl;
	}while (cco != 0);
	dmedia = numd / dcount;
	pmedia = nump / pcount;
	cout << "=============================================================" << endl;
	cout << "Numeri dispari generati: " << dcount << endl;
	cout << "Numeri pari generati: " << pcount << endl;
	cout << "Media numeri dispari: " << dmedia << endl;
	cout << "Media numeri pari : " << pmedia << endl;
	return(0);
}
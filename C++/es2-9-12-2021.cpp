#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int turnc = 6, fnudr, snudr, fendr = 0, sendr = 0, fvcheck = 0, svcheck = 0;
	srand(time(0));
	do
	{
		// First Player Phase
		fnudr = (rand() % 19) + 1;
		fendr = fendr + fnudr;
		// Second Player Phase 
		snudr = (rand() % 19) + 1;
		sendr = sendr + snudr;
		// Victory Counter
		if (fnudr > snudr)
		{
			fvcheck = fvcheck + 1;
		}
		else
		{
			svcheck = svcheck + 1;
		}
		// Turn Counter
		turnc = turnc - 1;
	}while (turnc != 0);
	if (fendr > sendr)
	{
		cout << "Giocatore 1 -> Hai Vinto! Punteggio: " << fendr << " Turni Vinti: " << fvcheck << endl;
	}
	else if (sendr == fendr)
	{
		cout << "Pareggio!" << endl;
	}
	else
	{
		cout << "Giocatore 2 -> Hai Vinto! Punteggio: " << sendr << " Turni Vinti: " << svcheck << endl;
	}
	system("pause");
	return(0);
}
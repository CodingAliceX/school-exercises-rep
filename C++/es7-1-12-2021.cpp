#include <iostream>

using namespace std;

int main()
{
	int bdate, yeara, yearb;
	cout << "Inserire l'anno di nascità:" << "\t";
	cin >> bdate;
	while (bdate < 0)
	{
		cout << "Data non valida reinserire!!:" << "\t";
		cin >> bdate;
	}
	if (bdate == 1969)
	{
		cout << "Sei nato/a nell'anno dell'uomo sulla luna" << endl;
	}
	else
	{
		if (bdate > 1969)
		{
			yeara = bdate - 1969;
			cout << "Sei nato/a dopo l'uomo sulla luna! Ci sono " << yeara << " Di Differenza";
		}
		else
		{
			yearb = 1969 - bdate;
			cout << "Sei nato/a prima dell'uomo sulla luna! Ci sono " << yearb << " Di Differenza";
		}
	}
	return(0);
}
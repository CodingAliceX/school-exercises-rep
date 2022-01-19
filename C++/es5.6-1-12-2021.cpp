#include <iostream>

using namespace std;

int main()
{
	int AAAA;
	cout << "Inserire l'anno :" << "\t";
	cin >> AAAA;
	while (AAAA < 0)
	{
		cout << "Reinserire l'anno :" << "\t";
		cin >> AAAA;
	}
	if (AAAA % 400 == 0)
	{
		cout << "Anno Bisestile";
	}
	else
	{
		if (AAAA % 4 == 0 && !(AAAA % 100 == 0))
		{
			cout << "Anno Bisestile";
		}
		else
		{
			cout << "Anno Non Bisestile";
		}
	}
	return(0);



}
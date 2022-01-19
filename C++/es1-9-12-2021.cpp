#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int array_voti[10], ci_ns = 0;
	double media, addmedia = 0;
	srand(time(0));
	for (int i = 0; i < 10; i++)
	{
		array_voti[i] = (rand() % 9) + 2;
		cout << "Voto N: " << i << " Voto: " << array_voti[i] << endl;
	}
	for (int i = 0; i < 10; i++)
	{
		if (array_voti[i] < 6)
		{
			ci_ns++;
		}
		addmedia = addmedia + array_voti[i];
	}
	media = addmedia / 10;
	cout << "Numero di insufficienze: " << ci_ns << endl;
	if (ci_ns > 3)
	{
		cout << "Non Promosso! Media: " << media;
	}
	else if (ci_ns >= 1 && ci_ns <= 3)
	{
		cout << "Giudizio Sospeso! Media: " << media;
	}
	else
	{
		cout << "Promosso con una media di: " << media << " !";
	}
	cout << endl;
	system("pause");
	return(0);
}
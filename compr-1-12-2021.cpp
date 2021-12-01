#include <iostream>

using namespace std;

int main()
{
	const int FSA1 = 0, FSA2 = 12, FSA3 = 18, FSA4 = 27, FSA5 = 48, FSAO = 60;
	float imp, imps;
	imps = 0;
	cout << "/////////////////////////////============/////////////////////////////" << endl;
	cout << "#                                                                    #" << endl;
	cout << "#                          Benvenuto Utente!                         #" << endl;
	cout << "#             Nel Sistema Di Calcolo Fiscale Elettronico!            #" << endl;
	cout << "#                                                                    #" << endl;
	cout << "#                           _______________                          #" << endl;
	cout << "#                          |               |                         #" << endl;
	cout << "#                          |      $$$      |                         #" << endl;
	cout << "#                          |               |                         #" << endl;
	cout << "#                           ---------------                          #" << endl;
	cout << "#                                Ready!                              #" << endl;
	cout << "/////////////////////////////============/////////////////////////////" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "# Fasce Redditi:" << endl;
	cout << "# 0k - 10k : " << FSA1 << "%" << endl;
	cout << "# 10k - 20k : " << FSA2 << "%" << endl;
	cout << "# 20k - 35K : " << FSA3 << "%" << endl;
	cout << "# 35k - 60k : " << FSA4 << "%" << endl;
	cout << "# 60k - 100k : " << FSA5 << "%" << endl;
	cout << "# Oltre : " << FSAO << "%" << endl;
	cout << "" << endl;
	cout << "Perfavore inserisci il tuo reddito : ";
	cin >> imp;
	while (imp < 0)
	{
		cout << "#ERRORE#: Perfavore reinserisci il tuo reddito! (Deve essere Maggiore di 0) : ";
		cin >> imp;
	}
	if (imp == 0 && imp <= 10000)
	{
		imps = imp / 100 * FSA1;
		cout << "IMPOSTA: (" << imp << " / " << "100) * " << FSA1 << endl;
		cout << "RISULTATO ----> " << imps << endl;
	}
	if (imp > 10000 && imp <= 20000)
	{
		imps = imp / 100 * FSA2;
		cout << "IMPOSTA: (" << imp << " / " << "100) * " << FSA2 << endl;
		cout << "RISULTATO ----> " << imps << endl;    
	}
	if (imp > 20000 && imp <= 35000)
	{
		imps = imp / 100 * FSA3;
		cout << "IMPOSTA: (" << imp << " / " << "100) * " << FSA3 << endl;
		cout << "RISULTATO ----> " << imps << endl;
	}
	if (imp > 35000 && imp <= 60000)
	{
		imps = imp / 100 * FSA4;
		cout << "IMPOSTA: (" << imp << " / " << "100) * " << FSA4 << endl;
		cout << "RISULTATO ----> " << imps << endl;
	}
	if (imp > 60000 && imp <= 100000)
	{
		imps = imp / 100 * FSA5;
		cout << "IMPOSTA: (" << imp << " / " << "100) * " << FSA5 << endl;
		cout << "RISULTATO ----> " << imps << endl;
	}
	if (imp > 100000)
	{
		imps = imp / 100 * FSAO;
		cout << "IMPOSTA: (" << imp << " / " << "100) * " << FSAO << endl;
		cout << "RISULTATO ----> " << imps << endl;
	}
	cout << "" << endl;
	cout << "" << endl;
	cout << "#####################################################################" << endl;
	cout << "#####################################################################" << endl;
	cout << "############################/ End           #########################" << endl;
	cout << "############################|   Of          |########################" << endl;
	cout << "#############################    Program    /########################" << endl;
	cout << "#####################################################################" << endl;
	cout << "#####################################################################" << endl;
	return(0);
}
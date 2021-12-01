#include <iostream>

using namespace std;

int main()
{
	int A, B, C;
	cout << "Inserire A: ";
	cin >> A;
	cout << "Inserire B: ";
	cin >> B;
	cout << "Inserire C: ";
	cin >> C;
	if (B > A)
	{
		if (B < C)
		{
			cout << "B e' compreso";
		}
		else
		{
			cout << "B non e' compreso";
		}
	}
	else
	{
		if (B < C)
		{
			cout << "B non e' compreso";
		}
		else
		{
			cout << "B e' compreso";
		}
	}
	return(0);
}
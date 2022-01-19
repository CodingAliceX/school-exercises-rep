#include <iostream>
#include <cmath>

using namespace std;

int main() {
	const float pi = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
	float areac, perimetro;
	cout << "Inserire l'area della circonferenza :";
	cin >> areac;
	while (areac <= 0) {                   //Keyboard Control for Impossible Value
		cout << "Reinserire :";
		cin >> areac;
	}
	perimetro = sqrt(4) * pi * areac;
	cout << "Il perimetro è :" << perimetro;
	return(0);
}

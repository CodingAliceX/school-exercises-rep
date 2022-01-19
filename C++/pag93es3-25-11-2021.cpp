#include <iostream>
#include <cmath>

using namespace std;

int main() {
	float perimetro, area;
	cout << "Inserire l'area :";
	cin >> area;
	while (area <= 0) {
		cout << "Reinserire :";
		cin >> area;
	}
	perimetro = sqrt(4) * area;
	cout << "Il perimetro è :" << perimetro;
	return(0);
}
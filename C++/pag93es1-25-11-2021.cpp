#include <iostream>

using namespace std;

int main() {
    float lquad, area, perimetro;
    cout << "Inserire il lato di un quadrato :";
    cin >> lquad;
    while (lquad <= 0) {
        cout << "Reinserire :";
        cin >> lquad;
    }
    area = lquad * lquad;
    perimetro = lquad * 4;
    cout << "L'area del quadrato � :" << area << endl;
    cout << "Il perimetro del quadrato � :" << perimetro << endl;
    return(0);
}
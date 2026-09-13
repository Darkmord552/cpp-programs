#include <iostream>
using namespace std;

double pole_kwadratu(double a) {
    return a * a;
}

double pole_prostokata(double a, double b) {
    return a * b;
}

int main() {
    double a, b;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    double wynik = 2 * pole_kwadratu(a) + 4 * pole_prostokata(a, b);
    cout << "Pole powierzchni prostokata wynosi: " << wynik << endl;

    return 0;
}
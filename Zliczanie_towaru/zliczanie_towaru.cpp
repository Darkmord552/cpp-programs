#include <iostream>
using namespace std;

int suma(int n) {
    int a, s = 0;

    for(int i = 0; i < n; i++) {
        cout << "Podaj liczbę sztuk w " << i+1 << " dostawie: ";
        cin >> a;
        if (a > 0) {
            s += a;
        } else {
            cout << "Wprowadzono błędną liczbę. Spróbuj ponownie." << endl;
            i--;
        }
    }
    return s;
}

int main() {
    int l_dostaw_tv, l_dostaw_gl;

    cout << "Ile było dostaw tv: ";
    cin >> l_dostaw_tv;
    cout << "Ile było dostaw głośników: ";
    cin >> l_dostaw_gl;

    if (l_dostaw_tv <= 0 || l_dostaw_gl <= 0) {
        cout << "Wprowadzono błędną liczbę dostaw" << endl;
        return 1;
    }

    int suma_tv = suma(l_dostaw_tv);
    int suma_gl = suma(l_dostaw_gl);

    cout << "Liczba TV z " << l_dostaw_tv << " dostaw wynosi " << suma_tv << endl;
    cout << "Liczba głośników z " << l_dostaw_gl << " dostaw wynosi " << suma_gl << endl;

    return 0;
}
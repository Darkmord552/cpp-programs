#include <iostream>
using namespace std;

int nwd(int a, int b) {
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return a;
}

int main() {
    int a, b;
    cout << "Wpisz wartość a: ";
    cin >> a;
    cout << "Wpisz wartość b: ";
    cin >> b;

    if(a <= 0 || b <= 0) {
        cout << "Podaj liczby naturalne większe od zera! " << endl;
        return 1;
    }

    cout << "NWD(" << a << ", " << b << ") = " << nwd(a, b) << endl;

    return 0;
}
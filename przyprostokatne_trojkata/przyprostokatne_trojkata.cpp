#include <iostream>
using namespace std;

void trojkat(int wysokosc) {
    for (int i = 1; i <= wysokosc; i++) {
        for (int j = 1; j <= wysokosc - i + 1; j++) {
            cout << "$";
        }
        cout << endl;
    }
}

int main() {
    int dlugosc;

    cout << "Podaj dlugosc przyprostokatne trojkata: ";
    cin >> dlugosc;

    trojkat(dlugosc);
    
    return 0;
}
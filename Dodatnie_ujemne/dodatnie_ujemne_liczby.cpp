#include <iostream>
using namespace std;

void Zliczaj(int n) {
    int liczba;
    int ujemne = 0;
    int dodatnie = 0;

    for (int i = 0; i < n; i++) {
        cout << "Podaj liczbę: ";
        cin >> liczba;

        if (liczba < 0) {
            ujemne++;
        } else {
            dodatnie++;
        }
    }
    cout << "Liczba ujemnych: " << ujemne << endl;
    cout << "Liczba dodatnich: " << dodatnie << endl;
}

int main() {
    int n;
    cout << "Ile liczb sprawdzic? ";
    cin >> n;

    Zliczaj(n);
    
    return 0;
}
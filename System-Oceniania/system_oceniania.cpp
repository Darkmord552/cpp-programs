#include <iostream>
using namespace std;

// funkcja obliczjąca średnią
double oblicz(int oceny[], int n) {
    double suma = 0;
    for (int i = 0; i < n; i++) {
        suma += oceny[i];
    }
    return suma / n;
}

int main() {
    string imie, nazwisko;
    int n;
    cout << "Witaj w programie!" << endl << endl;
    cout << "Zalogowano jako: Nauczyciel" << endl << endl;
    cout << "Podaj Imię ucznia: ";
    cin >> imie;
    cout << "Podaj Nazwisko ucznia: ";
    cin >> nazwisko;
    cout << "Podaj liczbę ocen (3-10): ";
    cin >> n;

    // Poprawiona walidacja liczby ocen
    if (n < 3 || n > 10) {
        cout << "Nieprawidłowa liczba ocen! Podaj wartość od 3 do 10." << endl;
        return 1;
    }

    int oceny[10];
    cout << "Podaj oceny (1-6): \n";
    for (int i = 0; i < n; i++) {
        cin >> oceny[i];
        if (oceny[i] < 1 || oceny[i] > 6) {
            cout << "Nieprawidłowa ocena! Podaj wartość od 1 do 6." << endl;
            return 1;
        } /*else if (i = 1) {
            cout << "Nie można wpisywać jedynek! Oj nie ładnie 😘";
            return 1;
        }*/
    }
    
    
    double srednia = oblicz(oceny, n);
    cout << "WYNIK PROGRAMU:" << endl;
    cout << "Uczeń: " << imie << " " << nazwisko << endl;
    cout << "Wpisane oceny: ";
    // pętla for która wypisuje oceny z tabekli
    for (int i = 0; i < n; i++) {
        cout << " " << oceny[i];
    }
    cout << endl;
    cout << "Średnia wpisanych ocen: " << srednia << endl;
      if (srednia < 2.0) {
        cout << "Ocena opisowa: Niedostateczny (1)";
    } else if (srednia < 3.0) {
        cout << "Ocena opisowa: Dopuszczający (2)";
    } else if (srednia < 3.9) {
        cout << "Ocena opisowa: Dostateczny (3)";
    } else if (srednia < 4.9) {
        cout << "Ocena opisowa: Dobry (4)";
    } else if (srednia < 5.4) {
        cout << "Ocena opisowa: Bardzo Dobry (5)";
    } else if (srednia >= 5.5 ) {
        cout << "Ocena opisowa: Celujący (6)";
    } else {
        cout << "Coś poszło nie tak z określeniem oceny opisowej!";
    }
    return 0;
}
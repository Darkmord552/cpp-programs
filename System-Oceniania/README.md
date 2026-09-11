# System Oceniania Ucznia

Konsolowy program w języku C++. Aplikacja umożliwia wprowadzanie danych ucznia oraz jego ocen, oblicza średnią arytmetyczną, a następnie automatycznie wyznacza odpowiednią ocenę opisową.

## Funkcjonalności

* **Pobieranie danych ucznia:** Wprowadzanie imienia i nazwiska ucznia.
* **Walidacja danych:** Sprawdzanie, czy zadeklarowana liczba ocen mieści się w dopuszczalnym przedziale (3–10).
* **Obliczanie średniej:** Dedykowana funkcja wyliczająca średnią arytmetyczną z podanych ocen.
* **Określanie oceny opisowej:** Automatyczne przypisywanie stopnia na podstawie wyliczonej średniej:
  * **< 2.0:** Niedostateczny (1)
  * **2.0 – 2.99:** Dopuszczający (2)
  * **3.0 – 3.89:** Dostateczny (3)
  * **3.9 – 4.89:** Dobry (4)
  * **4.9 – 5.39:** Bardzo Dobry (5)
  * **>= 5.5:** Celujący (6)
* **Podsumowanie:** Wyświetlanie czytelnego zestawienia wprowadzonych ocen, wyliczonej średniej oraz oceny opisowej.

## Struktura kodu (`system-oceniania.cpp`)

* `double oblicz(int oceny[], int n)` – funkcja odpowiedzialna za obliczenie i zwrócenie średniej arytmetycznej z podanej tablicy ocen.
* `int main()` – główna funkcja programu realizująca interfejs użytkownika w konsoli, pobieranie danych wejściowych (`cin`), pętle przetwarzające oraz instrukcje warunkowe kwalifikujące średnią do odpowiedniej oceny opisowej.

## Wymagania i uruchomienie

Do skompilowania programu wymagany jest dowolny kompilator języka C++ (np. `g++`).

### Kompilacja i uruchomienie w terminalu:

```bash
g++ system-oceniania.cpp -o system_oceniania
./system_oceniania
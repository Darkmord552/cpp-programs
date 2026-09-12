# Kalkulator Dostaw Towaru

Konsolowy program w języku C++ służący do zliczania i sumowania liczby produktów (np. telewizorów i głośników) sprowadzonych w poszczególnych partiach dostaw.

## Funkcjonalności

* **Pobieranie liczby dostaw:** Pobieranie od użytkownika informacji o liczbie dostaw dla poszczególnych kategorii produktów (TV, głośniki).
* **Walidacja danych:** 
  * Sprawdzanie, czy zadeklarowana liczba dostaw jest większa od zera.
  * Weryfikacja, czy liczba sztuk w poszczególnej dostawie jest wartością dodatnią (z możliwością ponowienia wpisania błędnej liczby).
* **Sumowanie towaru:** Dedykowana funkcja pobierająca szczegółowe dane o liczbie sztuk w każdej dostawie i obliczająca ich łączną sumę.
* **Podsumowanie:** Wyświetlanie czytelnego zestawienia końcowego z sumaryczną liczbą telewizorów oraz głośników.

## Struktura kodu (`zliczanie_towaru.cpp`)

* `int suma(int n)` – funkcja odpowiedzialna za pobranie w pętli liczby sztuk towaru dla `n` dostaw, walidację wprowadzonych wartości oraz zwrócenie łącznej sumy produktów.
* `int main()` – główna funkcja programu pobierająca dane o liczbie dostaw od użytkownika, weryfikująca warunki wejściowe, wywołująca funkcję `suma()` dla każdej kategorii produktów oraz prezentująca wyniki końcowe.

## Wymagania i uruchomienie

Do skompilowania programu wymagany jest dowolny kompilator języka C++ (np. `g++`).

### Kompilacja i uruchomienie w terminalu:

```bash
g++ zliczanie_towaru.cpp -o zliczanie_towaru
./zliczanie_towaru
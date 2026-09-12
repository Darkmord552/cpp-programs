# Kalkulator NWD (Największy Wspólny Dzielnik)

Konsolowy program w języku C++ służący do obliczania Największego Wspólnego Dzielnika dwóch liczb naturalnych za pomocą klasycznego algorytmu Euklidesa.

## Funkcjonalności

* **Pobieranie danych:** Wprowadzanie dwóch dodatnich liczb całkowitych z klawiatury.
* **Walidacja danych:** Weryfikacja, czy podane liczby są większe od zera (`a <= 0 || b <= 0`).
* **Obliczanie NWD:** Zastosowanie algorytmu Euklidesa opartego na powtarzalnym odejmowaniu mniejszej liczby od większej.
* **Prezentacja wyniku:** Czytelne wyświetlenie końcowego wyniku w formacie `NWD(a, b) = wynik`.

## Struktura kodu (`nwd.cpp`)

* `int nwd(int a, int b)` – funkcja realizująca algorytm Euklidesa w pętli `while`, zwracająca wyznaczony Największy Wspólny Dzielnik.
* `int main()` – główna funkcja programu odpowiedzialna za pobranie danych od użytkownika, sprawdzanie warunków wejściowych oraz wypisanie wyniku.

## Wymagania i uruchomienie

Do skompilowania programu wymagany jest dowolny kompilator języka C++ (np. `g++`).

### Kompilacja i uruchomienie w terminalu:

```bash
g++ nwd.cpp -o nwd
./nwd
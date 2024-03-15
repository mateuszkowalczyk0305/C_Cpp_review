# Zajęcia z programowania z języka C/C++ - powtórka.
## 📌 Lab 1:
Zajęcia organizacyjne.
## 📌 Lab 2:
Struktura aplikacji w paradygmacie programowania proceduralnego.
### Zadanie 1.
Zbuduj i uruchom aplikację, która wypisze na konsolę twoje imię i nazwisko. Korzystając z edytora tekstu porównaj kod źródłowy aplikacji (main.c) z kodem źródłowym asemblera (main.s).
### Zadanie 2.
Utwórz plik nagłówkowy defs.h zawierający deklaracje dwóch zmiennych typu zmiennoprzecinkowego pojedynczej precyzji i funkcji wykonującej dodawanie dwóch liczb zmiennoprzecinkowych (float add(float x, float y)). Utwórz odpowiadający mu plik źródłowy defs.c, zawierający odpowiednie definicje tych zmiennych i funkcji. Wywołaj funkcję add() wewnątrz funkcji main(), wykorzystując dwie zdefiniowane wcześniej zmienne i wypisz wynik dodawania na konsolę.
### Zadanie 3.
Sprawdź i wypisz na konsolę rozmiar różnych podstawowych typów zmiennych wykorzystując operator sizeof .
## 📌 Lab 3:
Operacje na zmiennych i instrukcje sterujące.
### Zadanie 1.
Napisz funkcję void zeros(float a, float b, float c), która oblicza, a następnie wyświetla na ekranie miejsca zerowe funkcji kwadratowej f(x) = ax2+bx+c w dziedzinie liczb rzeczywistych, na podstawie zadanych współczynników a, b, c. Deklaracja funkcji została umieszczona w pliku zeros.h. Umieść definicję funkcji w pliku zeros.c. Zaimplementowaną funkcję wywołaj w funkcji main() i zweryfikuj poprawność jej działania. Podpowiedź: pierwiastek kwadratowy można obliczyć wykorzystując funkcję sqrt(), zdeklarowaną w pliku nagłówkowym math.h
### Zadanie 2.
Wykorzystując dowolną pętlę, napisz funkcję void decimalToBinary(unsigned int number), która przyjmuje liczbę całkowitą (w systemie dziesiętnym) i wyświetla na konsoli jej odpowiednik w systemie binarnym. Deklaracja funkcji została umieszczona w pliku conversion.h. Umieść definicję funkcji w pliku conversion.c. Zaimplementowaną funkcję wywołaj w funkcji main() i zweryfikuj poprawność jej działania. Podpowiedź: funkcja printf() nie posiada ciągu formatującego do wyświetlania reprezentacji binarnej liczb. Aby wyświetlić przekonwertowaną liczbę poprawnie za pomocą funkcji printf(), zapisz ją do zmiennej jako liczbę dziesiętną w następującej postaci (przykład dla liczby binarnej 101011):
### Zadanie 3.
Algorytm RSA jest przykładem kryptograficznego algorytmu asymetrycznego wykorzystywanego m.in. w zabezpieczaniu komunikacji Internetowej. Kryptografia asymetryczna, zwana również kryptografią klucza publicznego, zakłada wykorzystanie dwóch powiązanych ze sobą kluczy. Jeden z kluczy (klucz publiczny) jest ujawniany bez zagrożenia utraty bezpieczeństwa danych. Drugi z kluczy (klucz prywatny, klucz deszyfrujący) jest niejawny i nie jest możliwe jego łatwe odtworzenie na podstawie klucza publicznego. Jego obliczenie sprowadza się do złamania operacji jednokierunkowej. Bezpieczeństwo algorytmu RSA bazuje na problemie faktoryzacji (dla danego n znaleźć takie liczby pierwsze p i q, że n = p·q). Procedura obliczania kluczy jest następująca [3]: 1. losowo wybierz dwie duże liczby pierwsze p i q 2. oblicz n = p·q 3. wybierz nieparzystą liczbę e względnie pierwszą z p − 1 oraz q − 1, tj. gcd(e, p −1) = gcd(e, q −1) = 1 4. oblicz sekret d z równania (2) d =e−1 mod φ(n), (2) gdzie φ(n) = (p−1)(q−1)– tocjent Eulera, a e−1 oznacza odwrotność modularną liczby e 5. opublikuj parę (e,n) jako klucz publiczny, para (d,n) stanowi klucz prywatny. Zadanie polega na wyznaczeniu liczb p, q i e na potrzeby obliczenia kluczy algorytmu RSA. W pliku nagłówkowym rsa utils.h zdeklarowano funkcje int gcd(unsigned int x, unsigned int y)– obliczającą największy wspólny dzielnik liczb x i y oraz bool isPrime(unsigned int x)sprawdzającą czy przekazana liczba jest liczbą pierwszą. Utwórz plik źródłowy rsa utils.c i zaimplementuj funkcje gcd() oraz isPrime(). W funkcji main() zainicjalizuj generator liczb pseudolosowych, a następnie za jego pomocą wylosuj liczby p, q i e takie, że isPrime(p) == isPrime(q) == true oraz gcd(e, p- 1) == gcd(e, q- 1) == 1.
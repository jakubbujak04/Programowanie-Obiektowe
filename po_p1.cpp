// po_p1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

void Zadanie_1a(unsigned int n) {
    for (unsigned int i = 0; i < n; i++) {
        std::cout << i % 10;
    }
}
void Zadanie_1b(unsigned int n){
    for (unsigned int i = 0; i < n; i++) {
        std::cout << i % 2;
    }
}
void Zadanie_1c(unsigned int n) {
    for (unsigned int i = 0; i < n; i++) {
        std::cout << i % 4;
    }
}

void Zadanie_1d(unsigned int n) {
    for (unsigned int i = 0; i < n * 4; i++){
        std::cout << i % 4;
    }
}

void Zadanie_1e(unsigned int n) {
    while (n > 1) {
        for (unsigned int i = 0; i < 10; i++) {
            std::cout << i % 10;
        }
        n--;
    }
    std::cout << "0123" << std::endl;
}

void Zadanie_2d(unsigned int n) {
    for (unsigned int i = 0; i < n; i++){
        for (unsigned int j = n; j > i; j--) {
            std::cout << j;
        }
        std::cout << std::endl;
    }


}

int main()
{
    unsigned int n;
    std::cout << "Podaj liczbe n" << std::endl;
    std::cin >> n;
    //Zadanie_1a(n);
    //Zadanie_1b(n);
    //Zadanie_1d(n);
    //Zadanie_1e(n);
    Zadanie_2d(n);

    return 0;
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln

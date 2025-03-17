// po_lab2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

double memory;

bool memory_used;

double sum(double a, double b) {
    double result = 0;
    if (memory_used == false) {
        std::cout << "Wybrana operacja: dodawanie" << std::endl;
        std::cout << "Podaj pierwsza liczbe" << std::endl;
        std::cin >> a;
        std::cout << "Podaj druga liczbe" << std::endl;
        std::cin >> b;
        result = a + b;
        memory = result;
    }
    else {
        std::cout << "Podaj kolejna liczbe" << std::endl;
        std::cin >> a;
        result = memory + a;
        memory = result;
    }
    return result;
}

double sub(double a, double b){
    double result = 0;
    if (memory_used == 0) {
        std::cout << "Wybrana operacja: dodawanie" << std::endl;
        std::cout << "Podaj pierwsza liczbe" << std::endl;
        std::cin >> a;
        std::cout << "Podaj druga liczbe" << std::endl;
        std::cin >> b;
        result = a - b;
        memory = result;
    }
    else {
        std::cout << "Podaj kolejna liczbe" << std::endl;
        std::cin >> a;
        result = memory - a;
        memory = result;
    }
    return result;
}

double tim(double a, double b) {
    double result = 0;
    if (memory_used == 0) {
        std::cout << "Wybrana operacja: dodawanie" << std::endl;
        std::cout << "Podaj pierwsza liczbe" << std::endl;
        std::cin >> a;
        std::cout << "Podaj druga liczbe" << std::endl;
        std::cin >> b;
        result = a * b;
        memory = result;
    }
    else {
        std::cout << "Podaj kolejna liczbe" << std::endl;
        std::cin >> a;
        result = memory * a;
        memory = result;
    }
    return result;
}

//Funkcja dzielaca dwie liczby
double div(double a, double b) {
    double result = 0;
    if (memory_used == 0) {
        std::cout << "Wybrana operacja: dodawanie" << std::endl;
        std::cout << "Podaj pierwsza liczbe" << std::endl;
        std::cin >> a;
        std::cout << "Podaj druga liczbe" << std::endl;
        std::cin >> b;
        if(b == 0){
            std::cout << "Nie mozna dzielic przez zero" << std::endl;
        }
        else {
            result = a / b;
            memory = result;
        }
    }
    else {
        std::cout << "Podaj kolejna liczbe" << std::endl;
        std::cin >> a;
        result = memory / a;
        memory = result;
    }
}

//Funkcja wykonujaca modulo dwoch liczb
double mod(double a, double b) {
    if (memory_used == 0) {
        std::cout << "Wybrana operacja: modulo" << std::endl;
        std::cout << "Podaj pierwsza liczbe" << std::endl;
        std::cin >> a;
        std::cout << "Podaj druga liczbe" << std::endl;
        std::cin >> b;
        return a - (int)(a / b) * b;
        memory = a - (int)(a / b) * b;
    }
    else {
        return memory - (int)(memory / b) * b;
        memory = memory - (int)(memory / b) * b;
    }
}

//Funkcja czyszczaca pamiec
void erase() {
    memory = 0;
    memory_used = false;
}

//Memu w ktorym wybiera sie operacje
void menu() {
    int x;

}

int main()
{
    
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

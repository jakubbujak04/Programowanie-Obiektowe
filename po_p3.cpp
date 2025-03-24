#include <iostream>

class Calculator {
private:
    double memory;
    bool memory_used;
    double sum(double a, double b) {
        double result = 0;
        std::cout << "Wybrana operacja: dodawanie" << std::endl;

        if (memory_used == false) {
            std::cout << "Podaj pierwsza liczbe" << std::endl;
            std::cin >> a;
            std::cout << "Podaj druga liczbe" << std::endl;
            std::cin >> b;
            result = a + b;
            memory = result;
            memory_used = true;
        }

        else {
            std::cout << "Podaj kolejna liczbe" << std::endl;
            std::cin >> a;
            result = memory + a;
            memory = result;
            memory_used = true;
        }

        std::cout << "Wynik: " << result << std::endl;
        return result;
    };
    double sub(double a, double b) {
        double result = 0;
        std::cout << "Wybrana operacja: odejmowanie" << std::endl;

        if (memory_used == false) {
            std::cout << "Podaj pierwsza liczbe" << std::endl;
            std::cin >> a;
            std::cout << "Podaj druga liczbe" << std::endl;
            std::cin >> b;
            result = a - b;
            memory = result;
            memory_used = true;
        }

        else {
            std::cout << "Podaj kolejna liczbe" << std::endl;
            std::cin >> a;
            result = memory - a;
            memory = result;
            memory_used = true;
        }

        std::cout << "Wynik: " << result << std::endl;
        return result;
    };
    double tim(double a, double b) {
        double result = 0;
        std::cout << "Wybrana operacja: mnozenie" << std::endl;

        if (memory_used == false) {
            std::cout << "Podaj pierwsza liczbe" << std::endl;
            std::cin >> a;
            std::cout << "Podaj druga liczbe" << std::endl;
            std::cin >> b;
            result = a * b;
            memory = result;
            memory_used = true;
        }

        else {
            std::cout << "Podaj kolejna liczbe" << std::endl;
            std::cin >> a;
            result = memory * a;
            memory = result;
            memory_used = true;
        }

        std::cout << "Wynik: " << result << std::endl;
        return result;
    };
    double div(double a, double b) {
        double result = 0;
        std::cout << "Wybrana operacja: dzielenie" << std::endl;

        if (memory_used == false) {
            std::cout << "Podaj pierwsza liczbe" << std::endl;
            std::cin >> a;
            std::cout << "Podaj druga liczbe" << std::endl;
            std::cin >> b;
            if (b == 0) {
                std::cout << "Nie mozna dzielic przez zero" << std::endl;
                return 0;
            }

            else {
                result = a / b;
                memory = result;
                memory_used = true;
            }
        }

        else {
            std::cout << "Podaj kolejna liczbe" << std::endl;
            std::cin >> a;
            result = memory / a;
            memory = result;
            memory_used = true;
        }

        std::cout << "Wynik: " << result << std::endl;
        return result;
    };
    double mod(double a, double b) {
        double result = 0;
        std::cout << "Wybrana operacja: modulo" << std::endl;

        if (memory_used == false) {
            std::cout << "Podaj pierwsza liczbe" << std::endl;
            std::cin >> a;
            std::cout << "Podaj druga liczbe" << std::endl;
            std::cin >> b;
            result = a - (int)(a / b) * b;
            memory = result;
            memory_used = true;
        }

        else {
            std::cout << "Podaj kolejna liczbe" << std::endl;
            std::cin >> a;
            result = memory - (int)(memory / a) * a;
            memory = result;
            memory_used = true;
        }

        std::cout << "Wynik: " << result << std::endl;
        return result;
    };
    void erase() {
        memory = 0;
        memory_used = false;
    };
    void get_memory() {
        std::cout << "Ostatnia liczba w pamieci: " << memory << std::endl;
    };

public:
    void menu() {
        memory = 0;
        memory_used = false;

        int x = 1;
        double a = 0;
        double b = 0;
        std::cout << "Wybierz operacje: \n 0) Zakoncz \n 1) Dodawanie \n 2) Odejmowanie \n 3) Mnozenie \n 4) Dzielenie \n 5) Modulo \n 6) Wyczysc pamiec \n 7) Wczytaj pamiec \n " << std::endl;
        while (x != 0) {
            std::cin >> x;
            switch (x) {
            case 1:
                sum(a, b);
                std::cout << "Wybierz nastepna operacje: " << std::endl;
                break;
            case 2:
                sub(a, b);
                std::cout << "Wybierz nastepna operacje: " << std::endl;
                break;
            case 3:
                tim(a, b);
                std::cout << "Wybierz nastepna operacje: " << std::endl;
                break;
            case 4:
                div(a, b);
                std::cout << "Wybierz nastepna operacje: " << std::endl;
                break;
            case 5:
                mod(a, b);
                std::cout << "Wybierz nastepna operacje: " << std::endl;
                break;
            case 6:
                erase();
                std::cout << "Wyczyszczono pamiec " << std::endl;
                std::cout << "Wybierz nastepna operacje: " << std::endl;
                break;
            case 7:
                get_memory();
                std::cout << "Wybierz nastepna operacje: " << std::endl;
                break;
            case 0:
                std::cout << "Zakonczenie dzialania programu" << std::endl;
                break;
            }
        }
    };

};


int main()
{
    Calculator Kalkulator;
    Kalkulator.menu();

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
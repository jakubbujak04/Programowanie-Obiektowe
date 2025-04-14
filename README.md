# Programowanie-Obiektowe
Projekt
Zalozenia projektu: Wykonanie prostego kalkulatora, który wykonuje operacje dodawania, odejmowania, mnozenia, dzielenia i modulo.
1) Część konsolowa
   -Stworzenie funkcji wykonujacych operacji, obsługa potencjalnych błędów (takich jak dzielenie przez 0) 
   -Stworzenie mennu, które pozwala na wybranie operacji
   -Utworzenie pamięci oraz utworzenie funkcji nadpisującej i czyszczączej (funkcja nadpisujaca pamiec set_memory wykonana w częsci okienkowej)
   -Utworzenie klasy kalkulatora, przeniesienie funkcji do ciała klasy
   -Podział projektu na pliki .h i .cpp (niewykonane, przygotowane dopiero w częsci okienkowej)
   -Konwersja systemów liczbowych (niewykonana)
3) Część okienkowa
   a) Stworzenie GUI
     -Ustalenie rozmiaru okienka, zablokowanie zmiany jego rozmiaru
     -Przypisanie layoutu: stworzenie niezbędnych przycisków ekranu kalkulatora, wykorzystanie wewnętrznych layoutów QT Creatora (np. Grid Layout, w celu uporządkowania klawiszy)
     -Dodanie funkcjonalności przycisków 
   Wszystkie zalozenia GUI zostały wykonane
   b) Podział projektu na pliki .h i .cpp
     -Utworzenie klasy kalkulatora, przypisanie jej metod i pól w pliku .h
     -Modyfikacja funkcji kalkulatora z części konsolowej w pliku .cpp
   c) Łączenie GUI z logiką
     -Połączenie wcześniej przygotowanych przycisków z elementami klasy kalkulatora (przypisywanie wartości z GUI do zmiennych kalkulatora, wykonywanie operacji)
     -Obsługa błędów (okna informacyjne, ostrzegające o potencjalnych błędach)
     -Obsługa menu:
       -Przygotowanie funkcji czyszczących i wczytujących pamięć, przygotowanie przycisku czyszczącego ekran kalkulatora
       -Przygotowanie okien informacyjnych (np. informacje o autorze, informacje o aplikacji)
     -Przygotowanie okna informującego o ostatniej operacji (np. dodawanie dwóch liczb)

   Potencjalne błędy:
   -przy obsłudze błędów kalkulator zwraca wartość 0, jednak w dalszym ciągu można wpisywać liczby (mozemy mieć liczbę np. 01251)
   -wpisywanie kolejnych wartości do ekranu kalkulatora nie nadpisuje zmian w oknie (jeżeli po otrzymaniu wyniku chcemy wpisac nastepna operacje, musimy wyczyscic okno)

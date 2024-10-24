#include <iostream>
#include "naglowek.h"

using namespace std;

int main()
{
    cout << "Tworzenie listy z 7" << endl;

    lista_dwukierunkowa a(4);

    a.wypisz();
    cout << "" << endl;
    cout << "Dodanie 7 na poczatek listy: " << endl;
    a.dodajpoczatek(7);
    a.wypisz();

    cout << "" << endl;
    cout << "Dodanie 1 na tyl listy: " << endl;
    a.dodajkoniec(1);
    a.wypisz();

    cout << "" << endl;
    cout << "Dodanie 3x9 na tyl listy: " << endl;
    a.dodajkoniec(9);
    a.dodajkoniec(9);
    a.dodajkoniec(9);
    a.wypisz();

    cout << "" << endl;
    cout << "Dodanie 1 na indeksie 3: " << endl;
    a.dodajindex(1, 2);
    a.wypisz();

    cout << "" << endl;
    cout << "Usuniecie na poczatku listy: " << endl;
    a.minuspoczatek();
    a.wypisz();

    cout << "" << endl;
    cout << "Usuniecie z tylu listy: " << endl;
    a.minuskoniec();
    a.wypisz();

    cout << "" << endl;
    cout << "Wyswietlenie listy od przodu: " << endl;
    a.wypisz();
    
    cout << "" << endl;
    cout << "Wyswietlenie listy od tylu: " << endl;
    a.wypiszodtylu();

    cout << "" << endl;
    cout << "Wyswietlenie nastepnego elementu o numerze  indexu 4: " << endl;
    a.wypisz();
    cout << "" << endl;
    cout << "Wypisany element: " << endl;
    cout << "" << endl;
    a.wypisznastepny_element(3);

    cout << "" << endl;
    cout << "Wyswietlenie poprzedniego elementu o numerze  indexu 2: " << endl;
    a.wypisz();
    cout << "" << endl;
    cout << "Wypisany element: " << endl;
    cout << "" << endl;
    a.wypiszpoprzedni_element(2);

    cout << "" << endl;
    cout << "Czyszczenie listy. ";
    a.usun();

    cout << "" << endl;
    cout << "Czyszczenie listy. ";
    a.usun();

}

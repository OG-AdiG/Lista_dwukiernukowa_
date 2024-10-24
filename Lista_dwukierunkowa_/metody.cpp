#include "naglowek.h"
#include <iostream>

using namespace std;

wezel::wezel(int a) : a(a), nastepny_element(nullptr), poprzedni_element(nullptr) {}
lista_dwukierunkowa::lista_dwukierunkowa(int a) { poczatek = new wezel(a), koniec = poczatek; }
lista_dwukierunkowa::~lista_dwukierunkowa(void) { this->usun(); }
void lista_dwukierunkowa::dodajpoczatek(int a) {

    wezel* wezeln = new wezel(a);

    if (!poczatek) { poczatek = koniec = wezeln; }

    else {
        wezeln->nastepny_element = poczatek;
        poczatek->poprzedni_element = wezeln;
        poczatek = wezeln;
    }

}

void lista_dwukierunkowa::minuspoczatek(void) {

    if (!poczatek) {
        cout << "brak poczatku listy\n";
        return;
    }

    poczatek = poczatek->nastepny_element;

    if (poczatek) {
        poczatek->poprzedni_element = nullptr;
    }

    else { koniec = nullptr; }

}

void lista_dwukierunkowa::minusindex(int a) {

    if (!poczatek) {
        cout << "brak poczatku listy\n";
        return;
    }

    if (a == 0) {
        this->minuspoczatek();
        return;
    }

    wezel* o = poczatek;

    for (int i = 0; o != nullptr && i < a; i++) { o = o->nastepny_element; }

    if (o == nullptr) {
        this->minuskoniec();
        return;
    }

    if (o->poprzedni_element != nullptr) {
        o->poprzedni_element->nastepny_element = o->nastepny_element;
    }

    if (o->nastepny_element != nullptr) {
        o->nastepny_element->poprzedni_element = o->poprzedni_element;
    }

    delete o;

};

void lista_dwukierunkowa::minuskoniec(void) {

    if (!koniec) { cout << "brak konca listy\n"; }

    koniec = koniec->poprzedni_element;

    if (koniec){
        koniec->nastepny_element = nullptr;
    }

    else { poczatek = nullptr; }

}

void lista_dwukierunkowa::dodajkoniec(int a) {

    wezel* wezeln = new wezel(a);

    if (!koniec) { poczatek = koniec = wezeln; }

    else {
        wezeln->poprzedni_element = koniec;
        koniec->nastepny_element = wezeln;
        koniec = wezeln;
    }

}

void lista_dwukierunkowa::dodajindex(int a, int b) {
    wezel* wezeln = new wezel(a);

    if (b == 0) {
        dodajpoczatek(a);
        return;
    }

    wezel* o = poczatek;

    for (int i = 0; o != nullptr && i < b; i++) { o = o->nastepny_element; }

    if (o == nullptr) { dodajkoniec(a); }

    else {
        wezeln->nastepny_element = o->nastepny_element;
        wezeln->poprzedni_element = o;
        o->nastepny_element = wezeln;

        if (wezeln->nastepny_element != nullptr) {
            wezeln->nastepny_element->poprzedni_element = wezeln;
        }

        else {
            koniec = wezeln;
        }
    }
}
void lista_dwukierunkowa::wypisz(void) {

    if (!poczatek) {
        cout << "brak poczatku listy\n";
        return;
    }

    wezel* o = poczatek;
    cout << endl;

    for (int i = 0; o != nullptr; i++) {
        cout << o->a << "  ";
        o = o->nastepny_element;
    }

    cout << endl;

}

void lista_dwukierunkowa::wypiszodtylu(void) {

    wezel* o = koniec;
    cout << endl;

    for (int i = 0; o != nullptr; i++) { cout << o->a << "  ", o = o->poprzedni_element; }

    cout << endl;

}

void lista_dwukierunkowa::wypisznastepny_element(int a) {

    if (!poczatek) {
        cout << "brak poczatku listy\n";
        return;
    }

    wezel* o = poczatek;
    for (int i = 0; o != nullptr && i < a; i++) {
        o = o->nastepny_element;
    }

    if (o == nullptr || o->nastepny_element == nullptr) {
        cout << "Brak nastepnego elementu" << endl;
        return;
    }

    wezel* s = o->nastepny_element;
    cout << s->a << endl;
}

void lista_dwukierunkowa::wypiszpoprzedni_element(int a) {

    if (!poczatek) {
        cout << "brak poczatku listy\n";
        return;
    }

    wezel* o = poczatek;
    for (int i = 0; o != nullptr && i < a; i++) {
        o = o->nastepny_element;
    }

    if (o == nullptr || o->poprzedni_element == nullptr) {
        cout << "Brak poprzedniego elementu" << endl;
        return;
    }

    wezel* s = o->poprzedni_element;
    cout << s->a << endl;

}

void lista_dwukierunkowa::usun(void) {

    while (poczatek != nullptr) {
        minuspoczatek();
    }

}

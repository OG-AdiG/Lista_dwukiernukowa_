#pragma once
/**
 * @file naglowek.h
 * @brief Plik naglowkowy zawierajacy definicje klas wezel i lista_dwukierunkowa dla dwukierunkowej listy.
 */

 /**
 * @brief Klasa wezel reprezentujaca wezel
 */
class wezel {
public:
    int a; ///< Wartosc przechowywana w wezelorce listy.   
    wezel* nastepny_element; ///< Wskaznik na nastepny element listy.
    wezel* poprzedni_element;///< Wskaznik na poprzedni listy.
    /**
    * @brief Konstruktor z parametrem.
    * @param a Wartosc, ktora nalezy przypisac do pola a.
    */
    wezel(int a);
};
/**
 * @brief Klasa lista_dwukierunkowa reprezentujaca liste dwukierunkowa.
 */
class lista_dwukierunkowa {
private:
    wezel* poczatek; ///< Wskaznik na pierwszy element listy.
    wezel* koniec; ///< Wskaznik na ostatni element listy.

public:
    /**
    * @brief Konstruktor listy dwukierunkowej, ktory tworzy liste z jednym elementem.
    * @param a Wartosc pierwszego elementu listy.
    */
    lista_dwukierunkowa(int a);
    /**
    * @brief Destruktor listy. Usuwa wszystkie elementy listy i zwalnia pamiec.
    */
    ~lista_dwukierunkowa(void);
    /**
    * @brief Dodaje nowy element o wartosci a na poczatku listy.
    * @param a Wartosc nowego elementu.
    */
    void dodajpoczatek(int a);
    /**
    * @brief Dodaje nowy element o wartosci a na koñcu listy.
    * @param a Wartosc nowego elementu.
    */
    void dodajkoniec(int a);
    /**
    * @brief Usuwa element z poczatku listy.
    */
    void minuspoczatek(void);
    /**
    * @brief Usuwa element z koñca listy.
    */
    void minuskoniec(void);
    /**
    * @brief Dodaje nowy element o wartosci a na pozycji b.
    * @param a Wartosc nowego elementu.
    * @param b Indeks, na ktorym nalezy wstawic nowy element.
    */
    void dodajindex(int a, int b);
    /**
   * @brief Usuwa element z podanego indeksu.
   * @param a Indeks elementu, ktory ma zostac usuniety.
   */
    void minusindex(int a);
    /**
    * @brief Wypisuje zawartosc listy od poczatku do konca.
    */
    void wypisz(void);
    /**
    * @brief Wypisuje zawartosc listy od konca do poczatku.
    */
    void wypiszodtylu(void);
    /**
    * @brief Wypisuje wartosc elementu, ktory znajduje sie po elemencie o wartosci a.
    * @param a Wartosc elementu, po ktorym ma zostac wypisany nastepny element.
    */
    void wypisznastepny_element(int a);
    /**
    * @brief Wypisuje wartosc elementu, ktory znajduje sie przed elementem o wartosci a.
    * @param a Wartosc elementu, przed ktorym ma zostac wypisany poprzedni element.
    */
    void wypiszpoprzedni_element(int a);
    /**
    * @brief Usuwa wszystkie elementy z listy.
    */
    void usun(void);
};
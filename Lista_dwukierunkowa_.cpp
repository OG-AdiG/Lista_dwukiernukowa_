#include <iostream>

using namespace std;

class Lista {

private:

	int pozycja;
	int data;
	Lista* next;
	Lista* prev;

public:

	Lista(int a = 0) :data(a), prev(nullptr), next(nullptr) {};
	~Lista(void) {};

	void DodajNaPocz();
	void DodajNaKon();
	void DodajNaID();
	void UsunZPocz();
	void UsunZKonc();
	void UsunZID();
	void WyswietlListe();
	void WyswietlOdwListe();
	void WyswietlNastElem();
	void WyswietlPoprzElem();
	void WyczyscListe();
					
};

void Lista::DodajNaPocz()
{
}

void Lista::DodajNaKon()
{
}

void Lista::DodajNaID()
{
}

void Lista::UsunZPocz()
{
}

void Lista::UsunZKonc()
{
}

void Lista::UsunZID()
{
}

void Lista::WyswietlListe()
{
}

void Lista::WyswietlOdwListe()
{
}

void Lista::WyswietlNastElem()
{
}

void Lista::WyswietlPoprzElem()
{
}

void Lista::WyczyscListe()
{
}


int main() {

	Lista* head = nullptr;
	Lista list;

}
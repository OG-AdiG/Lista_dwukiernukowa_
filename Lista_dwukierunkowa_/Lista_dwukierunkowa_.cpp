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

};

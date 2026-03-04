#pragma once
#include <string>
using namespace std;

class Nodo {
private:
    string dato;
    Nodo* siguiente;

public:
    Nodo(string dato, Nodo* siguiente);
    Nodo(string dato);
    Nodo();

    string getDato() const;
    void setDato(string dato);

    Nodo* getSiguiente() const;
    void setSiguiente(Nodo* siguiente);
};

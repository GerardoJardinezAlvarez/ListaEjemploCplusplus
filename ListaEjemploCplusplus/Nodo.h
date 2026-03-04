#pragma once
#include <string>

class Nodo {
private:
    std::string dato;
    Nodo* siguiente;

public:
    Nodo(std::string dato, Nodo* siguiente);
    Nodo(std::string dato);
    Nodo();

    std::string getDato() const;
    void setDato(std::string dato);

    Nodo* getSiguiente() const;
    void setSiguiente(Nodo* siguiente);
};

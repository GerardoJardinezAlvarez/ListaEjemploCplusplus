#include "Nodo.h"
using namespace std;

Nodo::Nodo(string dato, Nodo* siguiente) {
    this->dato = dato;
    this->siguiente = siguiente;
}

Nodo::Nodo(string dato) {
    this->dato = dato;
    this->siguiente = nullptr;
}

Nodo::Nodo() {
    this->dato = "";
    this->siguiente = nullptr;
}

string Nodo::getDato() const { return dato; }

void Nodo::setDato(string dato) { this->dato = dato; }

Nodo* Nodo::getSiguiente() const { return siguiente; }

void Nodo::setSiguiente(Nodo* siguiente) { this->siguiente = siguiente; }
#include "Nodo.h"

Nodo::Nodo(std::string dato, Nodo* siguiente) {
    this->dato = dato;
    this->siguiente = siguiente;
}

Nodo::Nodo(std::string dato) {
    this->dato = dato;
    this->siguiente = nullptr;
}

Nodo::Nodo() {
    this->dato = "";
    this->siguiente = nullptr;
}

std::string Nodo::getDato() const { return dato; }

void Nodo::setDato(std::string dato) { this->dato = dato; }

Nodo* Nodo::getSiguiente() const { return siguiente; }

void Nodo::setSiguiente(Nodo* siguiente) { this->siguiente = siguiente; }
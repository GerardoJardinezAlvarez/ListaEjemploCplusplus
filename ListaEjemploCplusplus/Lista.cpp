#include "Lista.h"
#include "ListaVaciaExcepcion.h"
#include <iostream>

Lista::Lista(std::string nombre) {
    this->nombre = nombre;
    primero = ultimo = nullptr;
}

Lista::Lista() {
    nombre = "Lista";
    primero = ultimo = nullptr;
}

Lista::Lista(std::string dato, std::string nombre) {
    this->nombre = nombre;
    primero = ultimo = new Nodo(dato);
}

Lista::~Lista() {
    Nodo* actual = primero;
    while (actual != nullptr) {
        Nodo* temporal = actual;
        actual = actual->getSiguiente();
        delete temporal;
    }
}

bool Lista::estaVacia() const {
    return primero == nullptr;
}

void Lista::InsertarUltimo(std::string elemento) {
    if (estaVacia()) {
        primero = ultimo = new Nodo(elemento);
    }
    else {
        Nodo* nuevoNodo = new Nodo(elemento);
        ultimo->setSiguiente(nuevoNodo);
        ultimo = nuevoNodo;
    }
}

void Lista::InsertarPrimero(std::string elemento) {
    if (estaVacia()) {
        primero = ultimo = new Nodo(elemento);
    }
    else {
        primero = new Nodo(elemento, primero);
    }
}

std::string Lista::BorrarPrimero() {
    if (estaVacia()) {
        throw ListaVaciaExcepcion(nombre);
    }

    std::string ElementoBorrado = primero->getDato();
    Nodo* nodoABorrar = primero;

    if (primero == ultimo) {
        primero = ultimo = nullptr;
    }
    else {
        primero = primero->getSiguiente();
    }

    delete nodoABorrar;
    return ElementoBorrado;
}

std::string Lista::BorrarUltimo() {
    if (estaVacia()) {
        throw ListaVaciaExcepcion(nombre);
    }

    std::string ElementoBorrado = ultimo->getDato();
    Nodo* nodoABorrar = ultimo;

    if (primero == ultimo) {
        primero = ultimo = nullptr;
    }
    else {
        Nodo* actual = primero;
        while (actual->getSiguiente() != ultimo) {
            actual = actual->getSiguiente();
        }
        ultimo = actual;
        ultimo->setSiguiente(nullptr);
    }

    delete nodoABorrar;
    return ElementoBorrado;
}

void Lista::Imprimir() const {
    if (estaVacia()) {
        std::cout << "La lista " << nombre << " esta vacia.\n";
        return;
    }

    std::cout << "Lista " << nombre << "\n";
    Nodo* actual = primero;

    while (actual != nullptr) {
        std::cout << actual->getDato() << "\n";
        actual = actual->getSiguiente();
    }
    std::cout << "\n";
}
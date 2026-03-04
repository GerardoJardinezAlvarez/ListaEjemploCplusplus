#include "Lista.h"
#include "ListaVaciaExcepcion.h"
#include <iostream>
using namespace std;

Lista::Lista(string nombre) {
    this->nombre = nombre;
    primero = ultimo = nullptr;
}

Lista::Lista() {
    nombre = "Lista";
    primero = ultimo = nullptr;
}

Lista::Lista(string dato, string nombre) {
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

void Lista::InsertarUltimo(string elemento) {
    if (estaVacia()) {
        primero = ultimo = new Nodo(elemento);
    }
    else {
        Nodo* nuevoNodo = new Nodo(elemento);
        ultimo->setSiguiente(nuevoNodo);
        ultimo = nuevoNodo;
    }
}

void Lista::InsertarPrimero(string elemento) {
    if (estaVacia()) {
        primero = ultimo = new Nodo(elemento);
    }
    else {
        primero = new Nodo(elemento, primero);
    }
}

string Lista::BorrarPrimero() {
    if (estaVacia()) {
        throw ListaVaciaExcepcion(nombre);
    }

    string ElementoBorrado = primero->getDato();
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

string Lista::BorrarUltimo() {
    if (estaVacia()) {
        throw ListaVaciaExcepcion(nombre);
    }

    string ElementoBorrado = ultimo->getDato();
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
        cout << "La lista " << nombre << " esta vacia.\n";
        return;
    }

    cout << "Lista " << nombre << "\n";
    Nodo* actual = primero;

    while (actual != nullptr) {
        cout << actual->getDato() << "\n";
        actual = actual->getSiguiente();
    }
    cout << "\n";
}
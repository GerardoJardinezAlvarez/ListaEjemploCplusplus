#pragma once
#include <string>
#include "Nodo.h" // Necesitamos conocer al Nodo para usarlo aqu�
using namespace std;

class Lista {
private:
    Nodo* primero;
    Nodo* ultimo;
    string nombre;

public:
    Lista(string nombre);
    Lista();
    Lista(string dato, string nombre);
    ~Lista();

    bool estaVacia() const;
    void InsertarUltimo(string elemento);
    void InsertarPrimero(string elemento);
    string BorrarPrimero();
    string BorrarUltimo();
    void Imprimir() const;
};
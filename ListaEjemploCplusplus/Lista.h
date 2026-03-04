#pragma once
#include <string>
#include "Nodo.h" // Necesitamos conocer al Nodo para usarlo aquí

class Lista {
private:
    Nodo* primero;
    Nodo* ultimo;
    std::string nombre;

public:
    Lista(std::string nombre);
    Lista();
    Lista(std::string dato, std::string nombre);
    ~Lista();

    bool estaVacia() const;
    void InsertarUltimo(std::string elemento);
    void InsertarPrimero(std::string elemento);
    std::string BorrarPrimero();
    std::string BorrarUltimo();
    void Imprimir() const;
};
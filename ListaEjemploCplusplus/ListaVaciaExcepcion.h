#pragma once
#include <string>
#include <stdexcept>
using namespace std;

class ListaVaciaExcepcion : public runtime_error {
public:
    ListaVaciaExcepcion(const string& nombre)
        : runtime_error("La lista de nombre " + nombre + " esta vacia.") {
    }
};
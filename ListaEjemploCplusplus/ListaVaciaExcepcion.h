#pragma once
#include <string>
#include <stdexcept>

class ListaVaciaExcepcion : public std::runtime_error {
public:
    ListaVaciaExcepcion(const std::string& nombre)
        : std::runtime_error("La lista de nombre " + nombre + " esta vacia.") {
    }
};
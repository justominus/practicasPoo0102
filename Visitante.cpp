#include "Visitante.h"
#include <iostream>

Visitante::Visitante() : Persona(), boleto(nullptr) {}

Visitante::Visitante(const std::string& nombre, int edad, const std::string& identificacion)
    : Persona(nombre, edad, identificacion), boleto(nullptr) {}

Visitante::~Visitante() {
    // En asociacion, no se elimina el objeto asociado
    // El boleto existe independientemente del visitante
    boleto = nullptr;
}

void Visitante::comprarBoleto(Boleto* boleto) {
    this->boleto = boleto;
}

Boleto* Visitante::getBoleto() const {
    return boleto;
}

void Visitante::mostrarInfo() const {
    std::cout << "=== Informacion del Visitante ===" << std::endl;
    Persona::mostrarInfo();
    if (boleto != nullptr) {
        std::cout << "--- Boleto del Visitante ---" << std::endl;
        boleto->mostrarInfo();
    } else {
        std::cout << "El visitante no tiene boleto." << std::endl;
    }
}

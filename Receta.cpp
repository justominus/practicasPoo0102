#include "Receta.h"
#include <iostream>
#include <algorithm>

Receta::Receta() : numero(0), fecha(""), nombreAnimal("") {}

Receta::Receta(int numero, const std::string& fecha, const std::string& nombreAnimal)
    : numero(numero), fecha(fecha), nombreAnimal(nombreAnimal) {}

Receta::~Receta() {
    // En agregacion, no se eliminan los objetos contenidos
    // Los tratamientos existen independientemente de la receta
    tratamientos.clear();
}

int Receta::getNumero() const {
    return numero;
}

std::string Receta::getFecha() const {
    return fecha;
}

std::string Receta::getNombreAnimal() const {
    return nombreAnimal;
}

std::vector<Tratamiento*> Receta::getTratamientos() const {
    return tratamientos;
}

void Receta::setNumero(int numero) {
    this->numero = numero;
}

void Receta::setFecha(const std::string& fecha) {
    this->fecha = fecha;
}

void Receta::setNombreAnimal(const std::string& nombreAnimal) {
    this->nombreAnimal = nombreAnimal;
}

void Receta::agregarTratamiento(Tratamiento* tratamiento) {
    if (tratamiento != nullptr) {
        tratamientos.push_back(tratamiento);
    }
}

void Receta::removerTratamiento(Tratamiento* tratamiento) {
    auto it = std::find(tratamientos.begin(), tratamientos.end(), tratamiento);
    if (it != tratamientos.end()) {
        tratamientos.erase(it);
    }
}

void Receta::mostrarInfo() const {
    std::cout << "=== Receta #" << numero << " ===" << std::endl;
    std::cout << "Fecha: " << fecha << std::endl;
    std::cout << "Animal: " << nombreAnimal << std::endl;
    std::cout << "--- Tratamientos ---" << std::endl;
    if (tratamientos.empty()) {
        std::cout << "No hay tratamientos en esta receta." << std::endl;
    } else {
        for (size_t i = 0; i < tratamientos.size(); ++i) {
            std::cout << "Tratamiento " << (i + 1) << ":" << std::endl;
            tratamientos[i]->mostrarInfo();
            std::cout << std::endl;
        }
    }
}

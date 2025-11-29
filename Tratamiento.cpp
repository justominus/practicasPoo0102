#include "Tratamiento.h"
#include <iostream>

Tratamiento::Tratamiento() : nombre(""), descripcion(""), duracionDias(0) {}

Tratamiento::Tratamiento(const std::string& nombre, const std::string& descripcion, int duracionDias)
    : nombre(nombre), descripcion(descripcion), duracionDias(duracionDias) {}

Tratamiento::~Tratamiento() {}

std::string Tratamiento::getNombre() const {
    return nombre;
}

std::string Tratamiento::getDescripcion() const {
    return descripcion;
}

int Tratamiento::getDuracionDias() const {
    return duracionDias;
}

void Tratamiento::setNombre(const std::string& nombre) {
    this->nombre = nombre;
}

void Tratamiento::setDescripcion(const std::string& descripcion) {
    this->descripcion = descripcion;
}

void Tratamiento::setDuracionDias(int duracionDias) {
    this->duracionDias = duracionDias;
}

void Tratamiento::mostrarInfo() const {
    std::cout << "Tratamiento: " << nombre << std::endl;
    std::cout << "Descripcion: " << descripcion << std::endl;
    std::cout << "Duracion: " << duracionDias << " dias" << std::endl;
}

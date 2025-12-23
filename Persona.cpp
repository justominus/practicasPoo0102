#include "Persona.h"
#include <iostream>

Persona::Persona() : nombre(""), edad(0), identificacion("") {}

Persona::Persona(const std::string& nombre, int edad, const std::string& identificacion)
    : nombre(nombre), edad(edad), identificacion(identificacion) {}

Persona::~Persona() {}

std::string Persona::getNombre() const {
    return nombre;
}

int Persona::getEdad() const {
    return edad;
}

std::string Persona::getIdentificacion() const {
    return identificacion;
}

void Persona::setNombre(const std::string& nombre) {
    this->nombre = nombre;
}

void Persona::setEdad(int edad) {
    this->edad = edad;
}

void Persona::setIdentificacion(const std::string& identificacion) {
    this->identificacion = identificacion;
}

void Persona::mostrarInfo() const {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Edad: " << edad << std::endl;
    std::cout << "Identificacion: " << identificacion << std::endl;
}

#include "Boleto.h"
#include <iostream>

Boleto::Boleto() : numero(0), precio(0.0), fecha(""), tipo("") {}

Boleto::Boleto(int numero, double precio, const std::string& fecha, const std::string& tipo)
    : numero(numero), precio(precio), fecha(fecha), tipo(tipo) {}

Boleto::~Boleto() {}

int Boleto::getNumero() const {
    return numero;
}

double Boleto::getPrecio() const {
    return precio;
}

std::string Boleto::getFecha() const {
    return fecha;
}

std::string Boleto::getTipo() const {
    return tipo;
}

void Boleto::setNumero(int numero) {
    this->numero = numero;
}

void Boleto::setPrecio(double precio) {
    this->precio = precio;
}

void Boleto::setFecha(const std::string& fecha) {
    this->fecha = fecha;
}

void Boleto::setTipo(const std::string& tipo) {
    this->tipo = tipo;
}

void Boleto::mostrarInfo() const {
    std::cout << "Boleto #" << numero << std::endl;
    std::cout << "Precio: $" << precio << std::endl;
    std::cout << "Fecha: " << fecha << std::endl;
    std::cout << "Tipo: " << tipo << std::endl;
}

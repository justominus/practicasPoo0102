#ifndef VISITANTE_H
#define VISITANTE_H

#include "Persona.h"
#include "Boleto.h"

// Herencia: Visitante hereda de Persona
class Visitante : public Persona {
private:
    // Asociacion: Visitante compra Boleto (relacion unidireccional)
    Boleto* boleto;

public:
    Visitante();
    Visitante(const std::string& nombre, int edad, const std::string& identificacion);
    ~Visitante() override;

    // Asociacion: Visitante compra Boleto
    void comprarBoleto(Boleto* boleto);
    Boleto* getBoleto() const;

    // Override del metodo virtual
    void mostrarInfo() const override;
};

#endif // VISITANTE_H

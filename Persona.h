#ifndef PERSONA_H
#define PERSONA_H

#include <string>

class Persona {
protected:
    std::string nombre;
    int edad;
    std::string identificacion;

public:
    Persona();
    Persona(const std::string& nombre, int edad, const std::string& identificacion);
    virtual ~Persona();

    // Getters
    std::string getNombre() const;
    int getEdad() const;
    std::string getIdentificacion() const;

    // Setters
    void setNombre(const std::string& nombre);
    void setEdad(int edad);
    void setIdentificacion(const std::string& identificacion);

    // Virtual method for polymorphism
    virtual void mostrarInfo() const;
};

#endif // PERSONA_H

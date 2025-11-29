#ifndef TRATAMIENTO_H
#define TRATAMIENTO_H

#include <string>

class Tratamiento {
private:
    std::string nombre;
    std::string descripcion;
    int duracionDias;

public:
    Tratamiento();
    Tratamiento(const std::string& nombre, const std::string& descripcion, int duracionDias);
    ~Tratamiento();

    // Getters
    std::string getNombre() const;
    std::string getDescripcion() const;
    int getDuracionDias() const;

    // Setters
    void setNombre(const std::string& nombre);
    void setDescripcion(const std::string& descripcion);
    void setDuracionDias(int duracionDias);

    void mostrarInfo() const;
};

#endif // TRATAMIENTO_H

#ifndef RECETA_H
#define RECETA_H

#include "Tratamiento.h"
#include <vector>
#include <string>

// Agregacion: Receta contiene Tratamiento
// Los tratamientos existen independientemente de la receta
class Receta {
private:
    int numero;
    std::string fecha;
    std::string nombreAnimal;
    // Agregacion: coleccion de punteros a Tratamiento
    std::vector<Tratamiento*> tratamientos;

public:
    Receta();
    Receta(int numero, const std::string& fecha, const std::string& nombreAnimal);
    ~Receta();

    // Getters
    int getNumero() const;
    std::string getFecha() const;
    std::string getNombreAnimal() const;
    std::vector<Tratamiento*> getTratamientos() const;

    // Setters
    void setNumero(int numero);
    void setFecha(const std::string& fecha);
    void setNombreAnimal(const std::string& nombreAnimal);

    // Agregacion: agregar y remover tratamientos
    void agregarTratamiento(Tratamiento* tratamiento);
    void removerTratamiento(Tratamiento* tratamiento);

    void mostrarInfo() const;
};

#endif // RECETA_H

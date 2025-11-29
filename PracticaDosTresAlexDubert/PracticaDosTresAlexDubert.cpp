// PracticaDosTresAlexDubert.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Persona.h"
#include "Visitante.h"
#include "Boleto.h"
#include "Tratamiento.h"
#include "Receta.h"

void ejemploAsociacion()
{
    // Asociación: Visitante usa/compra un Boleto (no hay miembro Boleto dentro de Visitante)
    Visitante v(2, "87654321", "maria@example.com", "Maria Lopez",25, "Turista");
    Boleto b(1, "ZooCentral", "2025-12-01", "Ciudad",15.50);

    std::cout << "== Ejemplo de Asociación ==\n";
    std::cout << v.ingresarDatos() << "\n";

    int cantidad =3;
    if (b.comprarBoleto(cantidad)) {
        double total = b.verPrecio() * cantidad;
        std::cout << v.getNombre() << " ha comprado " << cantidad << " boleto(s).\n";
        std::cout << "Detalle del boleto: " << b.listarBoleto() << "\n";
        std::cout << "Precio unitario: " << b.verPrecio() << " -> Precio total: " << total << "\n";
    } else {
        std::cout << "Compra fallida para " << v.getNombre() << "\n";
    }
    std::cout << "\n";
}

void ejemploAgregacion()
{
    // Agregación: Receta contiene (agrega) un Tratamiento
    Tratamiento t(10, "Amoxicilina", "500mg", "Cada8 horas después de comer");
    Receta r(10, "2025-11-29", t);

    std::cout << "== Ejemplo de Agregación ==\n";
    // crearReceta busca por id y muestra el tratamiento contenido
    std::cout << r.crearReceta(r.getId(), r.getFecha()) << "\n";
    // También se puede acceder al Tratamiento desde la Receta (copia/consulta)
    Tratamiento tDesdeReceta = r.getTratamiento();
    std::cout << "Medicamento en la receta: " << tDesdeReceta.getMedicamento() << ", Dosis: " << tDesdeReceta.getDosis() << "\n";
    std::cout << "\n";
}

int main()
{
    ejemploAsociacion();
    ejemploAgregacion();
    return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln

#include <iostream>
#include "Persona.h"
#include "Visitante.h"
#include "Boleto.h"
#include "Tratamiento.h"
#include "Receta.h"

int main() {
    std::cout << "========================================" << std::endl;
    std::cout << "   SISTEMA DE ZOOLOGICO - POO C++" << std::endl;
    std::cout << "========================================" << std::endl;

    // =====================================================
    // DEMOSTRACION DE HERENCIA: Visitante hereda de Persona
    // =====================================================
    std::cout << "\n--- HERENCIA: Visitante hereda de Persona ---\n" << std::endl;
    
    // Crear una persona base
    Persona persona1("Juan Perez", 35, "12345678");
    std::cout << "Persona base:" << std::endl;
    persona1.mostrarInfo();
    
    std::cout << std::endl;
    
    // Crear un visitante (hereda de Persona)
    Visitante visitante1("Maria Garcia", 28, "87654321");
    std::cout << "Visitante (sin boleto):" << std::endl;
    visitante1.mostrarInfo();

    // =====================================================
    // DEMOSTRACION DE ASOCIACION: Visitante compra Boleto
    // =====================================================
    std::cout << "\n--- ASOCIACION: Visitante compra Boleto ---\n" << std::endl;
    
    // Crear boletos (existen independientemente del visitante)
    Boleto boleto1(1001, 150.00, "2024-01-15", "Adulto");
    Boleto boleto2(1002, 75.00, "2024-01-15", "Nino");
    
    std::cout << "Boleto creado:" << std::endl;
    boleto1.mostrarInfo();
    
    std::cout << std::endl;
    
    // El visitante compra un boleto (asociacion unidireccional)
    visitante1.comprarBoleto(&boleto1);
    
    std::cout << "Visitante despues de comprar boleto:" << std::endl;
    visitante1.mostrarInfo();

    // Crear otro visitante que compra otro boleto
    Visitante visitante2("Pedro Lopez", 10, "11223344");
    visitante2.comprarBoleto(&boleto2);
    
    std::cout << "\nOtro visitante con boleto de nino:" << std::endl;
    visitante2.mostrarInfo();

    // =====================================================
    // DEMOSTRACION DE AGREGACION: Receta contiene Tratamiento
    // =====================================================
    std::cout << "\n--- AGREGACION: Receta contiene Tratamiento ---\n" << std::endl;
    
    // Crear tratamientos (existen independientemente de la receta)
    Tratamiento tratamiento1("Antibiotico", "Medicamento para infeccion bacteriana", 7);
    Tratamiento tratamiento2("Vitaminas", "Suplemento vitaminico", 30);
    Tratamiento tratamiento3("Antiparasitario", "Tratamiento contra parasitos", 3);
    
    std::cout << "Tratamientos creados:" << std::endl;
    tratamiento1.mostrarInfo();
    std::cout << std::endl;
    tratamiento2.mostrarInfo();
    std::cout << std::endl;
    tratamiento3.mostrarInfo();
    
    std::cout << std::endl;
    
    // Crear receta y agregar tratamientos (agregacion)
    Receta receta1(501, "2024-01-15", "Leon Simba");
    receta1.agregarTratamiento(&tratamiento1);
    receta1.agregarTratamiento(&tratamiento2);
    
    std::cout << "Receta con tratamientos agregados:" << std::endl;
    receta1.mostrarInfo();
    
    // Crear otra receta para otro animal
    Receta receta2(502, "2024-01-16", "Elefante Dumbo");
    receta2.agregarTratamiento(&tratamiento3);
    
    std::cout << "\nOtra receta:" << std::endl;
    receta2.mostrarInfo();
    
    // Demostrar que un tratamiento puede estar en multiples recetas
    // (caracteristica de la agregacion)
    receta2.agregarTratamiento(&tratamiento2);
    
    std::cout << "Receta actualizada (tratamiento compartido):" << std::endl;
    receta2.mostrarInfo();

    // =====================================================
    // DEMOSTRACION DE POLIMORFISMO
    // =====================================================
    std::cout << "\n--- POLIMORFISMO ---\n" << std::endl;
    
    // Puntero a Persona apuntando a un Visitante
    Persona* ptrPersona = &visitante1;
    std::cout << "Llamando mostrarInfo() a traves de puntero Persona*:" << std::endl;
    ptrPersona->mostrarInfo();

    std::cout << "\n========================================" << std::endl;
    std::cout << "   FIN DE LA DEMOSTRACION" << std::endl;
    std::cout << "========================================" << std::endl;

    return 0;
}

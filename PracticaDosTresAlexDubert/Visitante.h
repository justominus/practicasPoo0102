#pragma once
#include "Persona.h"
#include <string>

class Visitante : public Persona {
private:
 std::string tipoVisitante;
public:
 Visitante();
 Visitante(int nid, const std::string &ncedula, const std::string &ncorreo, const std::string &nnombre, int nedad, const std::string &ntipo);
 ~Visitante();

 std::string ingresarDatos();
 std::string mostrarTipoVisitante() const;

 void setTipoVisitante(const std::string &ntipo);
 std::string getTipoVisitante() const;
};
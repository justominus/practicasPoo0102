#include "Visitante.h"
#include <sstream>

Visitante::Visitante()
: Persona(), tipoVisitante("")
{
}

Visitante::Visitante(int nid, const std::string &ncedula, const std::string &ncorreo, const std::string &nnombre, int nedad, const std::string &ntipo)
: Persona(nid, ncedula, ncorreo, nnombre, nedad), tipoVisitante(ntipo)
{
}

Visitante::~Visitante()
{
}

std::string Visitante::ingresarDatos()
{
 std::ostringstream oss;
 oss << "Visitante: " << getNombre() << ", Cédula: " << getCedula() << ", Tipo: " << tipoVisitante;
 return oss.str();
}

std::string Visitante::mostrarTipoVisitante() const
{
 return tipoVisitante;
}

void Visitante::setTipoVisitante(const std::string &ntipo) { tipoVisitante = ntipo; }
std::string Visitante::getTipoVisitante() const { return tipoVisitante; }

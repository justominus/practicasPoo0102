#include "Persona.h"
#include <sstream>

Persona::Persona()
: id(0), cedula(""), correo(""), nombre(""), edad(0)
{
}

Persona::Persona(int nid, const std::string &ncedula, const std::string &ncorreo, const std::string &nnombre, int nedad)
: id(nid), cedula(ncedula), correo(ncorreo), nombre(nnombre), edad(nedad)
{
}

Persona::Persona(const std::string &ncedula, const std::string &ncorreo, const std::string &nnombre, int nedad)
: id(0), cedula(ncedula), correo(ncorreo), nombre(nnombre), edad(nedad)
{
}

Persona::~Persona()
{
}

void Persona::setId(int nid) { id = nid; }
int Persona::getId() const { return id; }

void Persona::setCedula(const std::string &ncedula) { cedula = ncedula; }
std::string Persona::getCedula() const { return cedula; }

void Persona::setCorreo(const std::string &ncorreo) { correo = ncorreo; }
std::string Persona::getCorreo() const { return correo; }

void Persona::setNombre(const std::string &nnombre) { nombre = nnombre; }
std::string Persona::getNombre() const { return nombre; }

void Persona::setEdad(int nedad) { edad = nedad; }
int Persona::getEdad() const { return edad; }

std::string Persona::ingresar() const
{
 std::ostringstream oss;
 oss << "Persona registrada: " << nombre << " (Cédula: " << cedula << ")";
 return oss.str();
}

bool Persona::eliminar(int nid)
{
 // Simulación: si los ids coinciden devuelve true
 return nid == id;
}

std::string Persona::actualizarEdad(int nedad)
{
 edad = nedad;
 std::ostringstream oss;
 oss << "Edad actualizada a " << edad << " para " << nombre;
 return oss.str();
}

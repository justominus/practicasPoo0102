#include "Receta.h"
#include <sstream>

Receta::Receta()
: id(0), fecha(""), tratamiento()
{
}

Receta::Receta(int nid, const std::string &nfecha, const Tratamiento &ntratamiento)
: id(nid), fecha(nfecha), tratamiento(ntratamiento)
{
}

Receta::~Receta() {}

void Receta::setId(int nid) { id = nid; }
int Receta::getId() const { return id; }

void Receta::setFecha(const std::string &nfecha) { fecha = nfecha; }
std::string Receta::getFecha() const { return fecha; }

void Receta::setTratamiento(const Tratamiento &ntratamiento) { tratamiento = ntratamiento; }
Tratamiento Receta::getTratamiento() const { return tratamiento; }

std::string Receta::crearReceta(int nid, const std::string &nfecha) const
{
 std::ostringstream oss;
 if (nid == id) {
 oss << "Receta[id=" << id << ", Fecha=" << fecha << ", " << tratamiento.verTratamiento(tratamiento.getId()) << "]";
 } else {
 oss << "Receta no encontrada";
 }
 return oss.str();
}

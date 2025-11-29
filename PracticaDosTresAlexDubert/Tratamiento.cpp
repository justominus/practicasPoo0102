#include "Tratamiento.h"
#include <sstream>

Tratamiento::Tratamiento()
: id(0), medicamento(""), dosis(""), indicaciones("")
{
}

Tratamiento::Tratamiento(int nid, const std::string &nmedicamento, const std::string &ndosis, const std::string &nindicaciones)
: id(nid), medicamento(nmedicamento), dosis(ndosis), indicaciones(nindicaciones)
{
}

Tratamiento::~Tratamiento() {}

void Tratamiento::setId(int nid) { id = nid; }
int Tratamiento::getId() const { return id; }

void Tratamiento::setMedicamento(const std::string &nmedicamento) { medicamento = nmedicamento; }
std::string Tratamiento::getMedicamento() const { return medicamento; }

void Tratamiento::setDosis(const std::string &ndosis) { dosis = ndosis; }
std::string Tratamiento::getDosis() const { return dosis; }

void Tratamiento::setIndicaciones(const std::string &nindicaciones) { indicaciones = nindicaciones; }
std::string Tratamiento::getIndicaciones() const { return indicaciones; }

std::string Tratamiento::verTratamiento(int nid) const
{
 std::ostringstream oss;
 if (nid == id) {
 oss << "Tratamiento[id=" << id << ", Medicamento=" << medicamento << ", Dosis=" << dosis << ", Indicaciones=" << indicaciones << "]";
 } else {
 oss << "Tratamiento no encontrado";
 }
 return oss.str();
}

#pragma once
#include <string>
#include "Tratamiento.h"

class Receta {
private:
 int id;
 std::string fecha;
 Tratamiento tratamiento; // agregación: contiene un Tratamiento
public:
 Receta();
 Receta(int nid, const std::string &nfecha, const Tratamiento &ntratamiento);
 ~Receta();

 void setId(int nid);
 int getId() const;

 void setFecha(const std::string &nfecha);
 std::string getFecha() const;

 void setTratamiento(const Tratamiento &ntratamiento);
 Tratamiento getTratamiento() const;

 std::string crearReceta(int nid, const std::string &nfecha) const;
};
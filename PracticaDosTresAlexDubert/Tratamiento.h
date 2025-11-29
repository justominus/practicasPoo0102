#pragma once
#include <string>

class Tratamiento {
private:
 int id;
 std::string medicamento;
 std::string dosis;
 std::string indicaciones;
public:
 Tratamiento();
 Tratamiento(int nid, const std::string &nmedicamento, const std::string &ndosis, const std::string &nindicaciones);
 ~Tratamiento();

 void setId(int nid);
 int getId() const;

 void setMedicamento(const std::string &nmedicamento);
 std::string getMedicamento() const;

 void setDosis(const std::string &ndosis);
 std::string getDosis() const;

 void setIndicaciones(const std::string &nindicaciones);
 std::string getIndicaciones() const;

 std::string verTratamiento(int nid) const;
};
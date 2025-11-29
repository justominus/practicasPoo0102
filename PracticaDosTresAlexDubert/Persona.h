#pragma once
#include <string>

class Persona {
private:
 int id;
 std::string cedula;
 std::string correo;
 std::string nombre;
 int edad;
public:
 // Constructores y destructor
 Persona();
 Persona(int nid, const std::string &ncedula, const std::string &ncorreo, const std::string &nnombre, int nedad);
 Persona(const std::string &ncedula, const std::string &ncorreo, const std::string &nnombre, int nedad);
 ~Persona();
 
 // Setters y getters
 void setId(int nid);
 int getId() const;

 void setCedula(const std::string &ncedula);
 std::string getCedula() const;

 void setCorreo(const std::string &ncorreo);
 std::string getCorreo() const;

 void setNombre(const std::string &nnombre);
 std::string getNombre() const;

 void setEdad(int nedad);
 int getEdad() const;
 
 // Métodos específicos
 std::string ingresar() const;
 bool eliminar(int nid);
 std::string actualizarEdad(int nedad);
};
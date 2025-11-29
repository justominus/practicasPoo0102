#pragma once
#include <string>

class Boleto {
private:
 int id;
 std::string nombreZoo;
 std::string fecha;
 std::string lugar;
 double precio;
public:
 Boleto();
 Boleto(int nid, const std::string &nnombreZoo, const std::string &nfecha, const std::string &nlugar, double nprecio);
 ~Boleto();

 void setId(int nid);
 int getId() const;

 void setNombreZoo(const std::string &nnombreZoo);
 std::string getNombreZoo() const;

 void setFecha(const std::string &nfecha);
 std::string getFecha() const;

 void setLugar(const std::string &nlugar);
 std::string getLugar() const;

 void setPrecio(double nprecio);
 double getPrecio() const;

 bool comprarBoleto(int cantidad);
 std::string listarBoleto() const;
 double verPrecio() const;
};
#include "Boleto.h"
#include <sstream>

Boleto::Boleto()
: id(0), nombreZoo(""), fecha(""), lugar(""), precio(0.0)
{
}

Boleto::Boleto(int nid, const std::string &nnombreZoo, const std::string &nfecha, const std::string &nlugar, double nprecio)
: id(nid), nombreZoo(nnombreZoo), fecha(nfecha), lugar(nlugar), precio(nprecio)
{
}

Boleto::~Boleto() {}

void Boleto::setId(int nid) { id = nid; }
int Boleto::getId() const { return id; }

void Boleto::setNombreZoo(const std::string &nnombreZoo) { nombreZoo = nnombreZoo; }
std::string Boleto::getNombreZoo() const { return nombreZoo; }

void Boleto::setFecha(const std::string &nfecha) { fecha = nfecha; }
std::string Boleto::getFecha() const { return fecha; }

void Boleto::setLugar(const std::string &nlugar) { lugar = nlugar; }
std::string Boleto::getLugar() const { return lugar; }

void Boleto::setPrecio(double nprecio) { precio = nprecio; }
double Boleto::getPrecio() const { return precio; }

bool Boleto::comprarBoleto(int cantidad)
{
 return cantidad >0;
}

std::string Boleto::listarBoleto() const
{
 std::ostringstream oss;
 oss << "Boleto[id=" << id << ", Zoo=" << nombreZoo << ", Fecha=" << fecha << ", Lugar=" << lugar << ", Precio=" << precio << "]";
 return oss.str();
}

double Boleto::verPrecio() const { return precio; }

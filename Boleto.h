#ifndef BOLETO_H
#define BOLETO_H

#include <string>

class Boleto {
private:
    int numero;
    double precio;
    std::string fecha;
    std::string tipo;

public:
    Boleto();
    Boleto(int numero, double precio, const std::string& fecha, const std::string& tipo);
    ~Boleto();

    // Getters
    int getNumero() const;
    double getPrecio() const;
    std::string getFecha() const;
    std::string getTipo() const;

    // Setters
    void setNumero(int numero);
    void setPrecio(double precio);
    void setFecha(const std::string& fecha);
    void setTipo(const std::string& tipo);

    void mostrarInfo() const;
};

#endif // BOLETO_H

#ifndef DEPOSITO_HPP
#define DEPOSITO_HPP

#include <string>
#include "Datos.hpp"

class Deposito : public Datos {

    private:

        float deposito;

    public:

    Deposito();
    Deposito(float elDeposito, string elNombre, string elNumeroCuenta, string laFecha);
    float getDeposito();

};
#endif
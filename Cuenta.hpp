#ifndef CUENTA_HPP
#define CUENTA_HPP

#include <string>
#include "HistorialDeMovimientos.hpp"

using namespace std;

class Cuenta : public HistorialDeMovimientos{

    private:

        string tipodecuenta;
        string numerodecuenta;
        string clienteasociado;

    public:

        Cuenta();
        Cuenta(string elTipoDeCuenta, string elNumeroDeCuenta, string elClienteAsociado, float elDeposito, float elRetiro);
        string getTipoDeCuenta();
        string getNumeroDeCuenta();
        string getClienteAsociado();

};
#endif
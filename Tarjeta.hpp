#ifndef TARJETA_HPP
#define TARJETA_HPP

#include <string>
#include "Vigencia.hpp"

using namespace std;

class Tarjeta{

    private:

        string numeroPlastico;
        string numeroSeguridad;
        string numeroCuenta;
        Vigencia vigencia;

    public:

        Tarjeta();                                                       
        Tarjeta(string elNumeroPlastico, string elNumeroSeguridad, string elNumeroCuenta, Vigencia laVigencia);
        string getNumeroPlastico();
        string getNumeroSeguridad();
        string getNumeroCuenta();
        Vigencia getVigencia();

};//Fin class Tarjeta

#endif
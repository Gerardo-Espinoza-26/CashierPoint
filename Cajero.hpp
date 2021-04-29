#ifndef CAJERO_HPP
#define CAJERO_HPP

#include <string>

using namespace std;

class Cajero{

    private:

        string codigoUnico;
        string numeroSucursal;
        string nombreBanco;

    public:

        Cajero();
        Cajero(string elCodigoUnico, string elNumeroSucursal, string elNombreBanco);
        string getCodigoUnico();
        string getNumeroSucursal();
        string getNombreBanco();

};//Fin class Cajero

#endif
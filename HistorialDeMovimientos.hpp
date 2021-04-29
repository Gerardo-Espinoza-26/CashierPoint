#ifndef HISTORIALDEMOVIMEINTOS_HPP 
#define HISTORIALDEMOVIMEINTOS_HPP

#include <string>

using namespace std;

class HistorialDeMovimientos{

    private:

        float deposito;
        float retiro;

    public: 

        HistorialDeMovimientos();
        HistorialDeMovimientos(float elDeposito, float elRetiro);
        float getDeposito();
        float getRetiro();

};
#endif
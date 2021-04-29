#ifndef MOVIMIENTOS_HPP
#define MOVIMIENTOS_HPP

#include <string>
#include "Datos.hpp"

using namespace std;

class Movimientos : public Datos{

    private:

        float cantidad;

    public:

        Movimientos();
        Movimientos(float laCantidad, string elNombre, string elNumeroDeCuenta, string laFecha);
        float getCantidad();

};
#endif
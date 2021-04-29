#ifndef DATOS_HPP
#define DATOS_HPP

#include <string>

using namespace std;

class Datos{

    private: 

        string nombre;
        string numeroCuenta;
        string fecha;

    public:

        Datos();
        Datos(string elNombre, string elNumeroCuenta, string laFecha);
        string getNombre();
        string getNumeroCuenta();
        string getFecha();

};//Fin class Datos

#endif
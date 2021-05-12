#ifndef CUENTAACCESO_HPP
#define CUENTAACCESO_HPP

#include <string>
#include "Cliente.hpp"

using namespace std;

class CuentaAcceso : public Cliente {

    private:

        string password;

    public:

        CuentaAcceso();
        CuentaAcceso(string elPassword, string elNombre, string elRFC, string elDomicilio);
        string getPassword();

};//Fin class CuentaAcceso

#endif
#include "CuentaAcceso.hpp"

CuentaAcceso::CuentaAcceso(){}

CuentaAcceso::CuentaAcceso(string elPassword, string elNombre, string elRFC, string elDomicilio)
             :Cliente(elNombre, elRFC, elDomicilio) {

    password = elPassword;

}//Fin CuentaAcceso::CuentaAcceso

string CuentaAcceso::getPassword(){

    return password;

}//Fin CuentaAcceso::getPassword
#include "Deposito.hpp"

Deposito::Deposito(){}

Deposito::Deposito(float elDeposito, string elNombre, string elNumeroCuenta, string laFecha) 
         : Datos(elNombre, elNumeroCuenta, laFecha){

    deposito = elDeposito;

}//Fin Deposito::Deposito

float Deposito::getDeposito(){

    return deposito;

}//Fin Deposito::getDeposito
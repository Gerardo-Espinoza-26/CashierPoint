#include "HistorialDeMovimientos.hpp"

HistorialDeMovimientos::HistorialDeMovimientos(){}

HistorialDeMovimientos::HistorialDeMovimientos(float elDeposito, float elRetiro){

    deposito = elDeposito;
    retiro = elRetiro;

}//Fin HistorialDeMovimientos::HistorialDeMovimientos

float HistorialDeMovimientos::getDeposito(){

    return deposito;

}//Fin float HistorialDeMovimientos::getDeposito

float HistorialDeMovimientos::getRetiro(){

    return retiro;

}//Fin float HistorialDeMovimientos::getRetiro
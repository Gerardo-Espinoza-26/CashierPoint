#include "Cuenta.hpp"

Cuenta::Cuenta(){}

Cuenta::Cuenta(string elTipoDeCuenta, string elNumeroDeCuenta, string elClienteAsociado, float elDeposito, float elRetiro) 
       :HistorialDeMovimientos(elRetiro, elDeposito){

    tipodecuenta = elTipoDeCuenta;
    numerodecuenta = elNumeroDeCuenta;
    clienteasociado = elClienteAsociado;

}//Fin Cuenta::Cuenta

string Cuenta::getTipoDeCuenta(){

    return tipodecuenta;

}//Fin Cuenta::getTipoDeCuenta

string Cuenta::getNumeroDeCuenta(){

    return numerodecuenta;

}//Fin Cuenta::getNumeroDeCuenta

string Cuenta::getClienteAsociado(){

    return clienteasociado;

}//Fin Cuenta::getClienteAsociado
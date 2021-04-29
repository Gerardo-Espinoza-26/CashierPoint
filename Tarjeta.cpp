#include "Tarjeta.hpp"

Tarjeta::Tarjeta(){}

Tarjeta::Tarjeta(string elNumeroPlastico, string elNumeroSeguridad, string elNumeroCuenta, Vigencia laVigencia){

    numeroPlastico = elNumeroPlastico;
    numeroSeguridad = elNumeroSeguridad;
    numeroCuenta = elNumeroCuenta;
    vigencia = laVigencia;

}//Fin Tarjeta::Tarjeta

string Tarjeta::getNumeroPlastico(){

    return numeroPlastico;

}//Fin Tarjeta::getNumeroPlastico

string Tarjeta::getNumeroSeguridad(){

    return numeroSeguridad;

}//Fin Tarjeta::getNumeroSeguridad

string Tarjeta::getNumeroCuenta(){

    return numeroCuenta;

}//Fin Tarjeta::getNumeroCuenta
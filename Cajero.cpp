#include "Cajero.hpp"

Cajero::Cajero(){}

Cajero::Cajero(string elCodigoUnico, string elNumeroSucursal, string elNombreBanco){

    codigoUnico = elCodigoUnico;
    numeroSucursal = elNumeroSucursal;
    nombreBanco = elNombreBanco;

}//Fin Cajero::Cajero

string Cajero::getCodigoUnico(){

    return codigoUnico;

}//Fin string Cajero::getCodigoUnico

string Cajero::getNumeroSucursal(){

    return numeroSucursal;

}//Fin string Cajero::getNumeroSucursal

string Cajero::getNombreBanco(){

    return nombreBanco;

}//Fin string Cajero::getNombreBanco

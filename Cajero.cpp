#include "Cajero.hpp"

Cajero::Cajero() {}

Cajero::Cajero(string elCodigoUnico, string elNumeroDeSucursal, string elNombreDelBanco){

    codigoUnico = elCodigoUnico;
    numeroDeSucursal = elNumeroDeSucursal;
    nombreDelBanco = elNombreDelBanco;

}//Fin Cajero::Cajero

string Cajero::getCodigoUnico(){

    return codigoUnico;

}//Fin Cajero::getCodigo

string Cajero::getNumeroSucursal(){

    return numeroDeSucursal;

}//Fin Cajero::getCodigo

string Cajero::getNombreBanco(){

    return nombreDelBanco;

}//Fin Cajero::getCodigo
#include "Vigencia.hpp"

Vigencia::Vigencia(){}

Vigencia::Vigencia(string elMes, string elAnio){

    mes = elMes;
    anio = elAnio;

}//Fin Vigencia::Vigencia

string Vigencia::getMes(){

    return mes;

}//Fin Vigencia::getMes

string Vigencia::getAnio(){

    return anio;

}//Fin Vigencia::getAnio
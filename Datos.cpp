#include "Datos.hpp"

Datos::Datos(){}

Datos::Datos(string elNombre, string elNumeroCuenta, string laFecha){

    nombre = elNombre;
    numeroCuenta = elNumeroCuenta;
    fecha = laFecha;

}//Fin Datos::Datos

string Datos::getNombre(){

    return nombre;

}//Fin string Datos::getNombre

string Datos::getNumeroCuenta(){

    return numeroCuenta;

}//Fin string Datos::getNumeroCuenta

string Datos::getFecha(){

    return fecha;

}//Fiin string Datos::getFecha
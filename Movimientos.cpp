#include "Movimientos.hpp"

Movimientos::Movimientos(){}

Movimientos::Movimientos(float laCantidad, string elNombre, string elNumeroDeCuenta, string laFecha) 
            :Datos(elNombre, elNumeroDeCuenta, laFecha){

    cantidad = laCantidad;

}//Fin Movimientos::Movimientos

float Movimientos::getCantidad(){

    return cantidad;

}//int Movimientos::getCantidad
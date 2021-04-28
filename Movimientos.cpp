#include "Movimientos.hpp"

Movimientos::Movimientos() {}

Movimientos::Movimientos(string elDia, string elMes, string elAnio, Cliente elCliente, Tarjeta laTarjeta){

	dia = elDia;
	mes = elMes;
	anio = elAnio;
	cliente = elCliente;
    tarjeta = laTarjeta;

}//Fin Movimientos::Movimientos

string Movimientos::getDia(){

    return dia;

}//Fin Movimientos::getDia

string Movimientos::getMes(){

    return mes;

}//Fin Movimientos::getMes

string Movimientos::getAnio(){

    return anio;

}//Fin Movimientos::getAnio

Cliente Movimientos::getCliente(){

    return cliente;

}//Fin Movimientos Cliente::getCliente

Tarjeta Movimientos::getTarjeta(){

    return tarjeta;

}//Fin Movimientos Tarjeta::getNumDeCuenta
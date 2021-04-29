#include "SistemaDeMovimiento.hpp"

SistemaDeMovimiento::SistemaDeMovimiento(){}

SistemaDeMovimiento::SistemaDeMovimiento(string elValidarCliente, float elSaldoActual, float elDepositado, float elRetiro, string elMovimiento, string elMovimeintoReciente){

    validarcliente = elValidarCliente;
    saldoactual = elSaldoActual;
    depositado = elDepositado;
    retiro = elRetiro;
    movimiento = elMovimiento;
    movimientoreciente = elMovimeintoReciente;

}//Fin SistemaDeMovimiento::SistemaDeMovimiento

string SistemaDeMovimiento::getValidarCliente(){

    return validarcliente;

}//Fin string SistemaDeMovimiento::getValidarCliente

float SistemaDeMovimiento::getSaldoActual(){

    return saldoactual;

}//Fin float SistemaDeMovimiento::getSaldoActual

float SistemaDeMovimiento::getDepositado(){

    return depositado;

}//Fin float SistemaDeMovimiento::getDepositado

float SistemaDeMovimiento::getRetiro(){

    return retiro;

}//Fin float SistemaDeMovimiento::getRetiro

string SistemaDeMovimiento::getMovimiento(){

    return movimiento;

}//Fin string SistemaDeMovimiento::getMovimiento

string SistemaDeMovimiento::getMovimientoReciente(){

    return movimientoreciente;

}//Fin string SistemaDeMovimiento::getMovimientoReciente
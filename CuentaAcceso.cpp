#include "CuentaAcceso.hpp"

VCliente::VCliente() {}

VCliente::VCliente(int elPin){

    pin = elPin;

}//Fin VCliente::VCliente

int VCliente::getPin(){

    return pin;

}//Fin int VCliente::getPin
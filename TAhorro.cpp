#include "TAhorro.hpp"

TAhorro::TAhorro(){}

TAhorro::TAhorro(float elBalanceAlCorte, string elNumeroPlastico, string elNumeroSeguridad, string elNumeroCuenta, Vigencia laVigencia) 
         :Tarjeta(elNumeroPlastico, elNumeroSeguridad, elNumeroCuenta, laVigencia){

    balanceAlCorte = elBalanceAlCorte;

}//Fin TAhorro::TAhorro

float TAhorro::getBalanceAlCorte(){

    return balanceAlCorte;

}//Fin TAhorro::getBalanceAlCorte
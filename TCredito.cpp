#include "TCredito.hpp"

TCredito::TCredito(){}

TCredito::TCredito(float elBalanceAlCorte, string elNumeroPlastico, string elNumeroSeguridad, string elNumeroCuenta, Vigencia laVigencia) 
         :Tarjeta(elNumeroPlastico, elNumeroSeguridad, elNumeroCuenta, laVigencia){

    balanceAlCorte = elBalanceAlCorte;

}//Fin TCredito::TCredito

float TCredito::getBalanceAlCorte(){

    return balanceAlCorte;

}//Fin TCredito::getBalanceAlCorte
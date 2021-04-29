#include "TDebito.hpp"

TDebito::TDebito(){}

TDebito::TDebito(float elBalanceAlCorte, string elNumeroPlastico, string elNumeroSeguridad, string elNumeroCuenta, Vigencia laVigencia) 
         :Tarjeta(elNumeroPlastico, elNumeroSeguridad, elNumeroCuenta, laVigencia){

    balanceAlCorte = elBalanceAlCorte;

}//Fin TDebito::TDebito

float TDebito::getBalanceAlCorte(){

    return balanceAlCorte;

}//Fin TDebito::getBalanceAlCorte
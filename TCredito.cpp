#include "TCredito.hpp"

TCredito::TCredito(float elBalanceAlCorte, string elNumEnPlastico, string elNumeroDeSeguridad, 
	
	string elNumeroDeCuenta, Vigencia laVigencia): Tarjeta(elNumEnPlastico, 
	elNumeroDeSeguridad, elNumeroDeCuenta, laVigencia){
		
	balanceAlCorte = elBalanceAlCorte;

}//Fin TCredito::TCredito


float TCredito::getBalanceAlCorte(){

	return balanceAlCorte;

}
#include "TDebito.hpp"

TDebito::TDebito(float elBalanceAlCorte, string elNumEnPlastico, string elNumeroDeSeguridad, 
	
	string elNumeroDeCuenta, Vigencia laVigencia): Tarjeta(elNumEnPlastico, 
	elNumeroDeSeguridad, elNumeroDeCuenta, laVigencia){
		
	balanceAlCorte = elBalanceAlCorte;

}//Fin TCredito::TCredito


float TDebito::getBalanceAlCorte(){

	return balanceAlCorte;

}
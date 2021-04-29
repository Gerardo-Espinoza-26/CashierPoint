#ifndef TCREDITO_HPP
#define TCREDITO_HPP

#include "Tarjeta.hpp"
#include "Vigencia.hpp"

class TCredito : public Tarjeta{

	private:

		float balanceAlCorte;

	public:
		
		TCredito();
		TCredito(float elBalanceAlCorte, string elNumeroPlastico, string elNumeroSeguridad, string elNumeroCuenta, Vigencia laVigencia);
		float getBalanceAlCorte();

}; 
#endif
#ifndef TDEBITO_HPP
#define TDEBITO_HPP

#include "Tarjeta.hpp"
#include "Vigencia.hpp"

class TDebito : public Tarjeta{

	private:

		float balanceAlCorte;

	public:
		
		TDebito();
		TDebito(float elBalanceAlCorte, string elNumeroPlastico, string elNumeroSeguridad, string elNumeroCuenta, Vigencia laVigencia);
		float getBalanceAlCorte();

}; 
#endif
#ifndef TDEBITO_HPP
#define TDEBITO_HPP

#include "Vigencia.hpp"
#include "Tarjeta.hpp"

class TDebito : public Tarjeta{

	private:

		float balanceAlCorte;

	public:
		
		TDebito(float elBalanceAlCorte, string elNumEnPlastico, 
		         string elNumeroDeSeguridad, string elNumeroDeCuenta, 
		Vigencia laVigencia);
		float getBalanceAlCorte();

}; 
#endif
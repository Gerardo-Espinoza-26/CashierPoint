#ifndef TAHORRO_HPP
#define TAHORRO_HPP

#include "Tarjeta.hpp"
#include "Vigencia.hpp"

class TAhorro : public Tarjeta{

	private:

		float balanceAlCorte;

	public:
		
		TAhorro();
		TAhorro(float elBalanceAlCorte, string elNumeroPlastico, string elNumeroSeguridad, string elNumeroCuenta, Vigencia laVigencia);
		float getBalanceAlCorte();

}; 
#endif
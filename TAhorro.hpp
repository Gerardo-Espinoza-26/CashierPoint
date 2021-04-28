#ifndef TAHORRO_HPP
#define TAHORRO_HPP

#include "Vigencia.hpp"
#include "Tarjeta.hpp"

class TAhorro : public Tarjeta{

	private:

		float balanceAlCorte;

	public:
		
		TAhorro(float elBalanceAlCorte, string elNumEnPlastico, 
		         string elNumeroDeSeguridad, string elNumeroDeCuenta, 
		Vigencia laVigencia);
		float getBalanceAlCorte();

}; 
#endif
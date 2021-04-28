#ifndef CAJERO_HPP
#define CAJERO_HPP

#include<string>

using namespace std;

class Cajero {
	
	private: 

		string codigoUnico;
		string numeroDeSucursal;
		string nombreDelBanco;

	public:
		Cajero();
		Cajero(string elCodigoUnico, string elNumeroDeSucursal, string elNombreDelBanco);
		string getCodigoUnico();
        string getNumeroSucursal();
        string getNombreBanco();
};
#endif
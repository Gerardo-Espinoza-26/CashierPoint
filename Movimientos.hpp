#ifndef MOVIMIENTOS_HPP
#define MOVIMIENTOS_HPP

#include "Cliente.hpp"
#include "Tarjeta.hpp"
#include <string>

using namespace std;

class Movimientos {
	
	private: 

        string dia;
		string mes;
		string anio;
		Cliente cliente;
		Tarjeta tarjeta;

	public:
		Movimientos();
		Movimientos(string elDia, string elMes, 
		            string elAnio, Cliente elCliente, Tarjeta laTarjeta);
		string getDia();
		string getMes();
		string getAnio();
		Cliente getCliente();
		Tarjeta getTarjeta();

};
#endif
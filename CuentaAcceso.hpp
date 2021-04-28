#ifndef CUENTAACCESO_HPP
#define CUENTAACCESO_HPP

#include<string>

using namespace std;

class VCliente {
	
	private: 

		int pin;

	public:
    
		VCliente();
		VCliente(int elPin);
		int getPin();

};
#endif
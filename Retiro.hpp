#ifndef RETIRO_HPP
#define RETIRO_HPP

#include <string>

using namespace std;

class Retiro {
	
	private:

	        float importeRetiro;

	public:
		
                Retiro();
                Retiro(float elImporteRetiro);
                float getImporteRetiro();
                float setImporteRetiro();

};
#endif
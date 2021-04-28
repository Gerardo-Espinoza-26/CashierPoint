#include "Cliente.cpp"
#include "Cajero.cpp"
#include "Movimientos.cpp"
#include "Tarjeta.cpp"
#include "TCredito.cpp"
#include "TDebito.cpp"
#include "TAhorro.cpp"
#include "Vigencia.cpp"

#include <stdlib.h>
#include <iostream>

int main(void){

	Cliente cliente1("Gerardo Espinoza", "EISG010126", "Juan Escutia #1741");

	Cajero cajero1("0126", "3617441523", "BBVA Bancomer");

	Vigencia vtc1("06","25");
	Vigencia vtc2("10","25");
	Vigencia vtc3("05","25"); 

	TCredito tc1(100000.00, "4152313617444109", "126", "1546348117", vtc1);
	TDebito td1(500.00, "5439242285880009", "259", "1534531235", vtc2);
	TAhorro ta1(10000.00, "4027665743785082", "891", "1861245415", vtc3);

	/*Movimientos mv1("26", "01", "2021");*/

	cout << "==================================================================" << endl;

	cout << endl;

	cout << "========== CashierPoint - Datos Del Cajero ==========" << endl;

	cout << endl;

	cout << "Codigo Del Cajero: " << cajero1.getCodigoUnico() << endl;
	cout << "Numero De Sucursal: " << cajero1.getNumeroSucursal() << endl;
	cout << "Nombre Del Banco: " << cajero1.getNombreBanco() << endl;

	cout << endl;

	cout << "========== CashierPoint - Datos Del Cliente ==========" << endl;

	cout << endl;

	cout << "Nombre: " << cliente1.getNombre() << endl;
	cout << "RFC: " << cliente1.getRFC() << endl;
	cout << "Domicilio: " << cliente1.getDomicilio() << endl;

	cout << endl;

	cout << "==================================================================" << endl;

	cout << endl;

	cout << "========== Cliente1 - Balance De Las Tarjetas ==========" << endl;

	cout << endl;

	cout << "Balance Tarjeta De Credito Cliente 1: " << tc1.getBalanceAlCorte() << endl;
	cout << "Balance Tarjeta De Debito Cliente 1: " << td1.getBalanceAlCorte() << endl;
	cout << "Balance Tarjeta De Ahorro Cliente 1: " << td1.getBalanceAlCorte() << endl;
	
	cout << endl;

	cout << "==================================================================" << endl;
	
	cout << endl;

	cout << "========== Cliente1 - Datos De La Tarjeta De Credito ==========" << endl;

	cout << endl;

	cout << "Tarjeta Credito Cliente 1, Numero En plastico: " << tc1.getNumDePlastico() << endl;  
	cout << "Tarjeta Credito Cliente 1, Numero De Seguridad: " << tc1.getNumDeSeguridad() << endl;  
	cout << "Tarjerta Credito Cliente 1, Numero De Cuenta: " << tc1.getNumDeCuenta() << endl;  

	cout << endl;

	cout << "==================================================================" << endl;
	
	cout << endl;

	
	cout << "========== Cliente1 - Datos De La Tarjeta De Debito ==========" << endl;

	cout << endl;

	cout << "Tarjeta Debito Cliente 1, Numero En plastico: " << td1.getNumDePlastico() << endl;  
	cout << "Tarjeta Debito Cliente 1, Numero De Seguridad: " << td1.getNumDeSeguridad() << endl;  
	cout << "Tarjerta Debito Cliente 1, Numero De Cuenta: " << td1.getNumDeCuenta() << endl;

	cout << endl;

	cout << "==================================================================" << endl;

	cout << endl;

	cout << "========== Cliente1 - Datos De La Tarjeta De Ahorro ==========" << endl;

	cout << endl;

	cout << "Tarjeta Ahorro Cliente 1, Numero En plastico: " << ta1.getNumDePlastico() << endl;  
	cout << "Tarjeta Ahorro Cliente 1, Numero De Seguridad: " << ta1.getNumDeSeguridad() << endl;  
	cout << "Tarjerta Ahorro Cliente 1, Numero De Cuenta: " << ta1.getNumDeCuenta() << endl;

	cout << endl;

	cout << "==================================================================" << endl;

	cout << endl;

	/*cout << "==========                Movimientos                   ==========" << endl;

	cout << endl;

	cout << "Movimientos Recientes De La Cuenta" << endl;
	cout << "Fecha: " << mv1.getDia() << " / " << mv1.getMes() << " / " << mv1.getAnio() << endl;
	cout << "Nombre Del Cliente: " << mv1.getCliente() << endl;
	cout << "Cuenta Del Cliente: " << mv1.getTarjeta() << endl;

	cout << endl;

	cout << "==================================================================" << endl;*/

	return EXIT_SUCCESS;

}//Fin int main
#include "Cajero.cpp"
#include "Cliente.cpp"
#include "Cuenta.cpp"
#include "CuentaAcceso.cpp"
#include "Datos.cpp"
#include "Deposito.cpp"
#include "HistorialDeMovimientos.cpp"
#include "Movimientos.cpp"
#include "SistemaDeMovimiento.cpp"
#include "Tarjeta.cpp"
#include "TAhorro.cpp"
#include "TCredito.cpp"
#include "TDebito.cpp"
#include "Vigencia.cpp"

#include <stdlib.h>
#include <iostream>

int main(void){

    Cajero cajero("2165", "3617441523", "BBVA Bancomer");

    Cliente cl1("Gerardo Espinoza", "012605", "Juan Escutia #1741");

    CuentaAcceso CA("1234", "Gerardo Espinoza", "012605", "Juan Escutia #1741");

    Datos DC("Gerardo Espinoza", "12345", "13:05 - 26/01/20");

    Movimientos MV(500.00, "Gerardo Espinoza", "12345", "08:55 - 29/04/21");

    Deposito DP(10500.00, "Gerardo Espinoza", "12345", "11:53 - 16/05/20");

    HistorialDeMovimientos HIST(10500.00, 500.00);

    SistemaDeMovimiento SM("Cliente Activo", 10000.00, 10500.00, 500.00, "Deposito y Retiro Del Saldo", "Se Depositaron 10500.00$ y Se Retiraron 500.00$");

    Cuenta CT("Debito", "12345", "Gerardo Espinoza", 10500.00, 500.00);

    Vigencia VTC("05","25");
    Vigencia VTD("01","26");
    Vigencia VTA("03","22");

    TCredito TC(500.00, "12345", "123", "12345", VTC);
    TDebito TD(10000.00, "12345", "123", "12345", VTD);
    TAhorro TA(75.00, "12345", "123", "12345", VTA);

    cout << endl;

	cout << "------------------------------------------------------------------" << endl;

	cout << "-                  CashierPoint - " << cajero.getNombreBanco() << "                  -" << endl;

	cout << "------------------------------------------------------------------" << endl;

	cout << "|                                                                |" << endl;

	cout << "|               Codigo Del Cajero:  " << cajero.getCodigoUnico() << "                         |" << endl;
	cout << "|               Numero De Sucursal: " << cajero.getNumeroSucursal() << "                   |" << endl;

	cout << "|                                                                |" << endl;

	cout << "------------------------------------------------------------------" << endl;

    cout << "-                           Cliente                              -" << endl;

	cout << "------------------------------------------------------------------" << endl;

    cout << "|                                                                |" << endl;

    cout << "|            Nombre Del Cliente:      " << cl1.getNombre() << "           |" << endl;
    cout << "|            RFC Del Cliente:         " << cl1.getRFC() << "                     |" << endl;
    cout << "|            Direccion Del Cliente:   " << cl1.getDomicilio() << "         |" << endl;

    cout << "|                                                                |" << endl;

    cout << "------------------------------------------------------------------" << endl;

    cout << "-                           Cuenta De Acceso                     -" << endl;

	cout << "------------------------------------------------------------------" << endl;

    cout << "|                                                                |" << endl;
    cout << "|            Nombre Del Cliente:      " << CA.getNombre() << "           |" << endl;
    cout << "|            Contrasena:              " << CA.getPassword() << "                       |" << endl;

    cout << "|                                                                |" << endl;

    cout << "------------------------------------------------------------------" << endl;

    cout << "-             " << cl1.getNombre() << " - Tarjeta De Credito              -" <<endl;

	cout << "------------------------------------------------------------------" << endl;

    cout << "|                                                                |" << endl;

    cout << "|               Balance Actual:       " << TC.getBalanceAlCorte() << "$" << "                       |" << endl;
    cout << "|               Numero De Plastico:   " << TC.getNumeroPlastico() << "                      |" << endl;
    cout << "|               Numero De Seguridad:  " << TC.getNumeroSeguridad() << "                        |" << endl;
    cout << "|               Numero De Cuenta:     " << TC.getNumeroCuenta() << "                      |" << endl;
    cout << "|               Fecha De Vencimiento: " << VTC.getMes() << "/" << VTC.getAnio() << "                      |" << endl;

    cout << "|                                                                |" << endl;

    cout << "------------------------------------------------------------------" << endl;
                                                                  
    cout << "-             " << cl1.getNombre() << " - Tarjeta De Debito               -" <<endl;

	cout << "------------------------------------------------------------------" << endl;

    cout << "|                                                                |" << endl;

    cout << "|               Balance Actual:       " << TD.getBalanceAlCorte() << "$" << "                     |" << endl;
    cout << "|               Numero De Plastico:   " << TD.getNumeroPlastico() << "                      |" << endl;
    cout << "|               Numero De Seguridad:  " << TD.getNumeroSeguridad() << "                        |" << endl;
    cout << "|               Numero De Cuenta:     " << TD.getNumeroCuenta() << "                      |" << endl;
    cout << "|               Fecha De Vencimiento: " << VTD.getMes() << "/" << VTD.getAnio() << "                      |" << endl;

    cout << "|                                                                |" << endl;

    cout << "------------------------------------------------------------------" << endl;
                                                                               
    cout << "-             " << cl1.getNombre() << " - Tarjeta De Ahorro               -" <<endl;

	cout << "------------------------------------------------------------------" << endl;

    cout << "|                                                                |" << endl;

    cout << "|               Balance Actual:       " << TA.getBalanceAlCorte() << "$" << "                        |" << endl;
    cout << "|               Numero De Plastico:   " << TA.getNumeroPlastico() << "                      |" << endl;
    cout << "|               Numero De Seguridad:  " << TA.getNumeroSeguridad() << "                        |" << endl;
    cout << "|               Numero De Cuenta:     " << TA.getNumeroCuenta() << "                      |" << endl;
    cout << "|               Fecha De Vencimiento: " << VTA.getMes() << "/" << VTA.getAnio() << "                      |" << endl;

    cout << "|                                                                |" << endl;

    cout << "------------------------------------------------------------------" << endl;

    cout << "-                           Datos                                -" << endl;

	cout << "------------------------------------------------------------------" << endl;

    cout << "|                                                                |" << endl;
    
    cout << "|            Nombre Del Cliente: " << DC.getNombre() << "                |" << endl;
    cout << "|            Numero De Cuenta:   " << DC.getNumeroCuenta() << "                           |" << endl;
    cout << "|            Fecha:              " << DC.getFecha() << "                |" << endl;

    cout << "|                                                                |" << endl;

    cout << "------------------------------------------------------------------" << endl;

    cout << "-                           Movimientos                          -" << endl;

	cout << "------------------------------------------------------------------" << endl;

    cout << "|                                                                |" << endl;
    
    cout << "|            Nombre Del Cliente: " << MV.getNombre() << "                |" << endl;
    cout << "|            Numero De Cuenta:   " << MV.getNumeroCuenta() << "                           |" << endl;
    cout << "|            Fecha:              " << MV.getFecha() << "                |" << endl;
    cout << "|            Cantidad:           " << MV.getCantidad() << "$                            |" << endl;
    
    cout << "|                                                                |" << endl;

    cout << "------------------------------------------------------------------" << endl;

    cout << "-                           Deposito                             -" << endl;

	cout << "------------------------------------------------------------------" << endl;

    cout << "|                                                                |" << endl;

    cout << "|            Nombre Del Cliente: " << DP.getNombre() << "                |" << endl;
    cout << "|            Numero De Cuenta:   " << DP.getNumeroCuenta() << "                           |" << endl;
    cout << "|            Fecha:              " << DP.getFecha() << "                |" << endl;
    cout << "|            Deposito:           " << DP.getDeposito() << "$                          |" << endl;
    
    cout << "|                                                                |" << endl;

    cout << "------------------------------------------------------------------" << endl;

    cout << "-                           Cuenta                               -" << endl;

	cout << "------------------------------------------------------------------" << endl;

    cout << "|                                                                |" << endl;

    cout << "|            Tipo De Cuenta:   " << CT.getTipoDeCuenta() << "                            |" << endl;
    cout << "|            Numero De Cuenta: " << CT.getNumeroDeCuenta() << "                             |" << endl;
    cout << "|            Cliente Asociado: " << CT.getClienteAsociado() << "                  |" << endl;
    cout << "|            Historial De Movimientos Recientes                  |" << endl;      
    cout << "|            Depositos: " << HIST.getDeposito() << "$" << "                                   |"<< endl;
    cout << "|            Retiros:   " << HIST.getRetiro() <<  "$" << "                                     |" << endl;
    
    cout << "|                                                                |" << endl;

    cout << "------------------------------------------------------------------" << endl;

    cout << "-                    Sistema De Movimeintos                      -" << endl;

	cout << "------------------------------------------------------------------" << endl;

    cout << "|                                                                |" << endl;

    cout << "|            Validar Cliente:       " << SM.getValidarCliente() << "               |" << endl;
    cout << "|            Saldo Actual:          " << SM.getSaldoActual() << "                        |" << endl;
    cout << "|            Dinero Depositado:     " << SM.getDepositado() << "                        |" << endl;
    cout << "|            Dinero Retirado:       " << SM.getRetiro() << "                          |"  << endl;
    cout << "|            Movimientos:           " << SM.getMovimiento() << "  |"  << endl;
    cout << "|            Movimientos Recientes: " << "                             |" << endl;
    cout << "|           " << SM.getMovimientoReciente() << "      |" << endl;

    cout << "|                                                                |" << endl;

    cout << "------------------------------------------------------------------" << endl;

    cout << endl;

    return EXIT_SUCCESS;

}//Fin int main
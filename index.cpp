#include "Cliente.cpp"
#include "Cajero.cpp"
#include "Tarjeta.cpp"
#include "TCredito.cpp"
#include "TDebito.cpp"
#include "TAhorro.cpp"
/*#include "CuentaAcceso.cpp"*/
#include "Vigencia.cpp"

#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
	
	int reiniciar, Opcion;

    Cajero cajero1("0126", "3617441523", "BBVA Bancomer");
    Cliente cliente1("Gerardo Espinoza", "EISG010126", "Juan Escutia #1741");

    Vigencia vtc1("06","25");
	Vigencia vtc2("10","25");
	Vigencia vtc3("05","25"); 

	TCredito tc1(0.00, "4152313617444109", "126", "1546348117", vtc1);
	TDebito td1(100000.00, "5439242285880009", "259", "1534531235", vtc2);
	TAhorro ta1(0.00, "4027665743785082", "891", "1861245415", vtc3);

    /*CuentaAcceso nip1(0126);*/

	do{
		
		system("cls");

		cout << "----------------------------------------" << endl;
        
        cout << "-             CashierPoint             -" << endl;

        cout << "----------------------------------------" << endl;
		
        cout << endl;
        
        cout << "----------------------------------------" << endl;

        cout << "  Codigo Del Cajero   -  " << cajero1.getCodigoUnico() << endl;
        cout << "  Numero De Sucursal  -  " << cajero1.getNumeroSucursal() << endl;
        cout << "  Nombre Del Banco    -  " << cajero1.getNombreBanco() << endl;

        cout << "-----------------------------------------" << endl;
		
        cout << endl;

        cout << "1.- Ingresar a Tu Cuenta." << endl;
        cout << "2.- Realizar Un Deposito." << endl;
        cout << "3.- Consultar Saldo." << endl;
        cout << "4.- Retiro De Dinero." << endl;
        cout << "5.- Salir Del Cajero." << endl;
        
        cout << endl;

        cout << "Ingresa Una Opcion: ";

        cin >> Opcion;

        cout << endl;

        switch(Opcion){

            case 1: 

                int Nip;

                cout << "----------------------------------------" << endl;

                cout << endl;

                cout << "- Ingresando a Tu Cuenta " << cajero1.getNombreBanco() << " -" << endl;

                cout << endl;

                cout << "----------------------------------------" << endl;

                cout << endl;

                /*cout << "Ingresa Tu Nip: ";

                cin >> Nip;

                if( Nip == nip1.getPin()){*/

                    cout << "----------------------------------------" << endl;

                    cout << endl;

                    cout << "Nombre: " << cliente1.getNombre() << endl;
                    cout << "RFC: " << cliente1.getRFC() << endl;
                    cout << "Domicilio: " << cliente1.getDomicilio() << endl;

                    cout << endl;

                    cout << "Balance En La Tarjeta De Credito De " << cliente1.getNombre() << ":    " << tc1.getBalanceAlCorte() << "$." << endl;
                    cout << "Balance En La Tarjeta De Debito De " << cliente1.getNombre() << ":     " << td1.getBalanceAlCorte() << "$." << endl;
                    cout << "Balance En La Tarjeta De Ahorro De " << cliente1.getNombre() << ":     " << ta1.getBalanceAlCorte() << "$." << endl;

                    cout << endl;

                    cout << "----------------------------------------" << endl;

                /*}else{

                    cout << "El Nip No Coincide." << endl;

                    cout << endl;

                }//Fin if else*/

            break;

            case 2: 

                cout << "     Depositos     " << endl;

                cout << endl;

            break;

            case 3: 

                cout << "     Consulta De Saldo     " << endl;

                cout << endl;

            break;

            case 4: 

                cout << "     Retiro Sin Tarjeta     " << endl;

                cout << endl;

            break;

            case 5: 

                cout << "Saliendo Del Cajero Automatico." << endl;

                cout << endl;

            break;

            default: 

                cout << "Debes Ingresar Una Opcion Valida." << endl;

                cout << endl;

        }//Fin switch

	do{
	
	cout << "Quieres Volver a Ingresar Al Cajero Automatico?" << endl;
	
	cout << endl;
	
	cout << "[ 1.Si - 2.No ] ";
	
	cin >> reiniciar;
	
	cout << endl;
	
	if ( reiniciar > 2 ){
		
		cout << "Error! Solo Puedes Ingresar Una De Las 2 Opciones Disponibles" << endl;
		
		cout << endl;
		
	}//Fin if
	
	}while( reiniciar >= 3 );
	
	}while( reiniciar != 2 );
	
    cout << "Saliendo Del Sistema, " << cajero1.getNombreBanco() << " Agradece Su Preferencia." << endl;

    cout << endl;

	system("pause");

	return 0;
    
}//Fin main
#ifndef SISTEMADEMOVIMIENTO_HPP
#define SISTEMADEMOVIMIENTO_HPP

#include <string>

using namespace std;

class SistemaDeMovimiento{

    private:

        string validarcliente;
        float saldoactual;
        float depositado; 
        float retiro;
        string movimiento;
        string movimientoreciente;

    public:

        SistemaDeMovimiento();
        SistemaDeMovimiento(string elValidarCliente, float elSaldoActual, float elDepositado, float elRetiro, string elMovimiento, string elMovimeintoReciente);
        string getValidarCliente();
        float getSaldoActual();
        float getDepositado();
        float getRetiro();
        string getMovimiento();
        string getMovimientoReciente();

};
#endif
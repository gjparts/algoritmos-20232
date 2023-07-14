#ifndef CUENTAAHORRO_H
#define CUENTAAHORRO_H

#include<iostream>
#include<stdexcept>
using namespace std;

class CuentaAhorro{
	private:
		//atributos privados
		int edad;
		double saldo;
	public:
		//atributos publicos
		string cliente;
		//constructores
		CuentaAhorro(){
			//constr. sin param.
			this->edad = 18;
			this->cliente = "No definido";
			this->saldo = 0.00;
		}
		CuentaAhorro(string cliente, int edad){
			this->saldo = 0.00;
			this->setEdad(edad);	//set a la edad con validacion
			this->cliente = cliente;
		}
		//metodos
		//setters y getters de edad
		int getEdad(){
			return this->edad;
		}
		void setEdad( int edad ){
			if( edad >= 18 )
				this->edad = edad;	//edad aceptada
			else
				throw invalid_argument("Edad debe ser >= 18.");
		}
		//setters y getters de saldo
		double getSaldo(){
			return this->saldo;
		}
		void depositar(double monto){
			if( monto >= 0 )
				this->saldo += monto;
			else
				throw invalid_argument("Monto a depositar debe ser >= 0");
		}
		void retirar(double monto){
			if( monto >= 0 ){
				if( monto <= this->saldo )
					this->saldo -= monto;
				else
					throw invalid_argument("No puede retirar mas de lo que hay");
			}
			else
				throw invalid_argument("Monto a retirar debe ser >= 0");
		}
};

#endif











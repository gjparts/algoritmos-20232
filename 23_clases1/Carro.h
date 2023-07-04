//Ayuda al pre-compilador
//evita la ambigüedad al hacer include
//de esta clase desde diferentes archivos
#ifndef CARRO_H
#define CARRO_H

#include <iostream>
using namespace std;

class Carro{
	private:
		//ambito privado (private scope)
		//elementos solo accesibles dentro
		//de la clase
	public:
		//ambito publico (public scope)
		//elementos accesibles desde cualquier parte
		//atributos publicos (propiedades)
		string marca;
		string modelo;
		string color;
		int anio;
		//constructores
};

#endif

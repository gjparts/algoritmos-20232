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
		/*
		Constructor
		Es un metodo (funcion) que da memoria a cada
		instancia de la Clase (o sea a cada objeto)
		-> Se debe llamar igual que la clase
		-> No tiene tipo de dato puesto que devuelve un puntero de memoria
		-> siempre va en el ambito publico
		-> normalmente los usamos para inicializar los atributos de la clase
		-> en C++ y Java una clase puede tener varios constructores
		*/
		//constructor sin parametros
		Carro(){
			//inicializar los atributos de esta clase
			this->marca = "No tiene";
			this->modelo = "No definido";
			this->color = "No tiene";
			this->anio = 0;
		}
};

#endif

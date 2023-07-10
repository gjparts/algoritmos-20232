#ifndef PERSONA_H
#define PERSONA_H

#include<iostream>
using namespace std;

class Persona{
	private:
	public:
		//atributos publicos
		string nombre;
		int edad;
		char genero;
		string identidad;
		char estadoCivil;
		//constructores
		//constructor sin parametros
		Persona(){
			this->nombre = "No tiene";
			this->edad = 0;
			this->genero = 'X';
			this->identidad = "No definida";
			this->estadoCivil = 'X';
		}
		//constructor con tres parametros
		Persona(string nombre, string identidad, int edad){
			this->nombre = nombre;
			this->edad = edad;
			this->genero = 'X';
			this->identidad = identidad;
			this->estadoCivil = 'X';
		}
		//constructor con todos los parametros
		Persona(string nombre, int edad, string identidad,
				char genero, char estadoCivil ){
			this->nombre = nombre;
			this->edad = edad;
			this->genero = genero;
			this->identidad = identidad;
			this->estadoCivil = estadoCivil;
		}
		//metodo
		void imprimir(){
			cout << "*********** PERSONA ************" << endl;
			cout << "Nombre: " << this->nombre << endl;
			cout << "Edad: " << this->edad << endl;
			cout << "Identidad: " << this->identidad << endl;
			cout << "Genero: " << this->genero << endl;
			cout << "Estado Civil: " << this->estadoCivil << endl;
		}
};

#endif

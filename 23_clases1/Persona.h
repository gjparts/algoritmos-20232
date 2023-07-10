#ifndef PERSONA_H
#define PERSONA_H

#include<iostream>
#include<stdexcept>
using namespace std;

class Persona{
	private:
		//atributos privados
		int edad;
		char genero;
		char estadoCivil;
	public:
		//atributos publicos
		string nombre;		
		string identidad;
		//constructores
		//constructor sin parametros
		/*
		//reutilizar constructor con 5 param. para el constr. sin param.
		Persona() : Persona("no tiene",0,"No definida",'X','X') {
		}
		*/
		Persona(){
			this->nombre = "No tiene";
			this->edad = 0;
			this->genero = 'X';
			this->identidad = "No definida";
			this->estadoCivil = 'X';
		}
		//constructor con tres parametros
		/*
		//reutilizar constructor con 5 param. para el constr. con 3 param.
		Persona(string nombre, string identidad, int edad) :
		Persona(nombre,edad,identidad,'X','X'){	
		}*/
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
		//metodos
		void imprimir(){
			cout << "*********** PERSONA ************" << endl;
			cout << "Nombre: " << this->nombre << endl;
			cout << "Edad: " << this->edad << endl;
			cout << "Identidad: " << this->identidad << endl;
			cout << "Genero: " << this->genero << endl;
			cout << "Estado Civil: " << this->estadoCivil << endl;
		}
		//setters y getters
		//asignar la edad a la persona, la edad debe ser un numero >= 0
		void setEdad(int edad){
			if( edad >= 0 )
				this->edad = edad;	//edad aceptada
			else
				throw invalid_argument("edad debe ser >= 0");
		}
		//obtener el valor almacenado en edad
		int getEdad(){
			return this->edad;
		}
};

#endif

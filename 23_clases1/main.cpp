#include<iostream>
#include "Carro.h"

using namespace std;

int main(){
	//instanciar un nuevo objeto de clase Carro
	Carro *c1 = new Carro();
	cout << "Direccion de memoria de c1: " << c1 << endl;
	//marca del Carro como venia segun el constructor
	cout << "Marca de c1: " << c1->marca << endl;
	
	//asignar valor a atributo
	c1->marca = "Toyota";
	//marca del Carro luego de asignar nuevo valor
	cout << "Marca de c1: " << c1->marca << endl;
	
	cout << "Modelo de c1: " << c1->modelo << endl;
	cout << "Color de c1: " << c1->color << endl;
	cout << "Anio de c1: " << c1->anio << endl;
	
	//declaramos variable c2 de tipo Carro
	//pero al no usar el constructor
	//no es un objeto porque no le dimos memoria
	//o sea c2 no esta instanciado
	//c2 tiene memoria CERO por lo tanto es NULL
	Carro *c2;
	cout << "Direccion de memoria de c2: " << c2 << endl;
	
	//solo si el carro fuera diferente de NULL podemos manipularlo
	if( c2 != NULL ){
		c2->marca = "Honda";
		cout << "Marca de c2: " << c2->marca << endl;
	}
	
	return 123;
}

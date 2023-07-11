#include<iostream>
#include "Carro.h"
#include "Persona.h"

using namespace std;

int main(){
	Persona *p1 = new Persona();
	p1->setEdad(99);	
	p1->setGenero('M');
	cout << p1->getEdad() << endl;
	
	p1->imprimir();
	cout << "La edad de p1 es " << p1->getEdad() << endl;
	
	Persona *p2 = new Persona("Fenestacio Ruiz","231231213",40);
	p2->imprimir();
	Persona *p3 = new Persona("Josue",10,"2131",'M','S');
	p3->imprimir();
	
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
	
	c1->encender();
	c1->apagar();
	c1->encender();
	c1->apagar();
	c1->encender();
	c1->apagar();
	c1->encender();
	c1->apagar();
	
	//declaramos variable c2 de tipo Carro
	//pero al no usar el constructor
	//no es un objeto porque no le dimos memoria
	//o sea c2 no esta instanciado
	//c2 tiene memoria CERO por lo tanto es NULL
	Carro *c2 = NULL;
	cout << "Direccion de memoria de c2: " << c2 << endl;
	
	//solo si el carro fuera diferente de NULL podemos manipularlo
	if( c2 != NULL ){
		c2->marca = "Honda";
		cout << "Marca de c2: " << c2->marca << endl;
	}
	
	Carro *c3 = new Carro("Honda","Civic");
	cout << "Marca de c3: " << c3->marca << endl;
	cout << "Modelo de c3: " << c3->modelo << endl;
	cout << "Color de c3: " << c3->color << endl;
	cout << "Anio de c3: " << c3->anio << endl;
	
	Carro *c4 = new Carro("Pontiac","Vibe","Azul",2007);
	cout << "Marca de c4: " << c4->marca << endl;
	cout << "Modelo de c4: " << c4->modelo << endl;
	cout << "Color de c4: " << c4->color << endl;
	cout << "Anio de c4: " << c4->anio << endl;
	
	Carro *c5 = new Carro("Ford","Ranger");
	c5->color = "Blanco";
	c5->anio = 2022;
	c5->marca = "FORD";
	
	cout << "Marca de c5: " << c5->marca << endl;
	cout << "Modelo de c5: " << c5->modelo << endl;
	cout << "Color de c5: " << c5->color << endl;
	cout << "Anio de c5: " << c5->anio << endl;
	
	string x, y, z;
	int a;
	cout << "Ingrese marca: ";
	getline(cin,x);
	cout << "Ingrese modelo: ";
	getline(cin,y);
	cout << "Ingrese anio: ";
	cin >> a;
	cout << "Ingrese color: ";
	cin.ignore();	//evitar bug, venimos de leer un int
	getline(cin,z);
	
	//crear objeto en base a lo leido
	Carro *c6 = new Carro(x,y,z,a);
	cout << "Marca de c6: " << c6->marca << endl;
	cout << "Modelo de c6: " << c6->modelo << endl;
	cout << "Color de c6: " << c6->color << endl;
	cout << "Anio de c6: " << c6->anio << endl;
	
	return 123;
}







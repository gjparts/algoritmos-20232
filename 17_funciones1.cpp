#include<iostream>
using namespace std;

/*FUNCIONES EN C++
Modelo basado en Prototipos
antes del man se declaran las firmas de las funciones
y despues del main se implementan.*/

//prototipos de funcion
int sumar(int a, int b);	//funcion que devuelve la suma de dos enteros
int restar(int a, int b);	//funcion que devuelve la resta de dos enteros
double sumar(double a, double b); //funcion que devuelve la suma de dos doubles
								  //sobrecarga de funciones: dos func. que se llaman
								  //igual pero tienen diferente firma (tipo de dato)
void saludar(string nombre);	//funcion que saluda

//funcion principal
int main(){
	cout << sumar(1,4) << endl;
	cout << sumar(6,2) << endl;
	cout << sumar(1.6,4.8) << endl;
	saludar("Filomeno Colinas");
	return 432;
}

//implementacion de las funciones prototipadas
int sumar(int a, int b){
	return a+b;
}

int restar(int a, int b){
	return a-b;
}

double sumar(double a, double b){
	return a+b;
}

//las funciones de tipo void no necesitan obligatoriamente de return.
void saludar(string nombre){
	cout << "Hola " << nombre << ", sabias que 2+2 es " << sumar(2,2) << "?" << endl;
}






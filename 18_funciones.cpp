#include<iostream>
using namespace std;

/*FUNCIONES EN C++
Modelo basado en NO USAR Prototipos
todas las funciones se implementan antes del main*/
//implementacion de las funciones
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

//funcion principal
int main(){
	cout << sumar(1,4) << endl;
	cout << sumar(6,2) << endl;
	cout << sumar(1.6,4.8) << endl;
	saludar("Filomeno Colinas");
	return 432;
}

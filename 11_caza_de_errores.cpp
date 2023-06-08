#include<iostream>
using namespace std;

int main(){
	//caza de errores.
	/*Hacer un programa que calcule e imprima el promedio de 3 numeros double.
	Validar que los valores digitados sean numeros si es asi entonces
	imprimir el promedio, de lo contrario imprimir un mensaje
	indicando que alguno de los valores proporcionados no es correcto.*/
	string valor1, valor2, valor3;
	cout << "Valor 1: ";
	getline(cin,valor1);
	cout << "Valor 2: ";
	getline(cin,valor2);
	cout << "Valor 3: ";
	getline(cin,valor3);
	
	try{
		double a,b,c;
		a = stod(valor1);
		b = stod(valor2);
		c = stod(valor3);
		cout << "el promedio es: " << (a+b+c)/3.0 << endl;
	}catch(exception ex){
		cout << "Alguno de los valores proporcionados no es correcto." << endl;
	}
	
	
	
	return 123;
}

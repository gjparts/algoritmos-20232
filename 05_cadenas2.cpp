#include<iostream>
using namespace std;

int main(){
	//concatenar dos o mas cadenas
	string a = "Gerardo";
	string b = "Ing. en Sistemas";
	string unir = "Hola soy "+a+" y doy clases en "+b;
	cout << unir << endl;
	
	//concatenar char a una cadena de texto
	string x = "Numero ";
	char z = '1';
	x = x+z;
	cout << x << endl;
	
	//reemplazar un char en determinada posicion de la cadena
	string cadena1 = "Enigma";
	cadena1[2] = '1';
	cout << cadena1 << endl;
	
	/*Pedir al usuario que digite una cadena de texto.
	el programa la recorrera caracter por caracter y va a reemplazar todo espacio en blanco
	por un guion bajo _
	IMPORTANTE: no ir imprimiendo caracter por caracter, sino imprimir al final la
		    misma cadena de texto capturada pero alterada con el reemplazo del espacio
		    por guion.
	EJEMPLO:
	Digitar cadena: Hola soy Gerardo
	Resultado: Hola_soy_Gerardo*/
	string captura;
	cout << "Digitar cadena: ";
	getline(cin,captura);
	
	for( int i = 0; i < captura.size(); i++ ){
		if( captura[i] == ' ' )
			captura[i] = '_';
	}
	cout << "Resultado: " << captura << endl;
	
	cout << "*********************************" << endl;
	string cadenaX, cadenaY;
	cout << "Digitar cadenaX: ";
	getline(cin,cadenaX);
	cout << "Digitar cadenaY: ";
	getline(cin,cadenaY);
	
	if( cadenaX == cadenaY )
		cout << "las cadenas son iguales" << endl;
	else
		cout << "las cadenas NO son iguales" << endl;
		
	/*Hacer un programa que capture dos cadenas de texto, 
	luego compararlas si son iguales o no; pero ignorando
	sus mayusculas/minusculas.*/
	
	return 234;
}

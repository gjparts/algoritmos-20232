#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	char c1 = 'x';
	string cadenax = "abcd";
	
	//imprimir
	cout << c1 << endl;
	cout << cadenax << endl;
	
	//acceder a los elementos de un string
	cout << cadenax[0] << endl;
	cout << cadenax[1] << endl;
	cout << cadenax[2] << endl;
	cout << cadenax[3] << endl;
	
	//capturar un string
	//no se recomienda usar cin
	string cadena1;
	cout << "digitar una cadena: ";
	getline(cin,cadena1);
	cout << "la cadena capturada es: " << cadena1 << endl;
	
	//recorrer la cadena caracter por caracter
	for( int i = 0; i < cadena1.size(); i++ ){
		cout << "posicion: " << i << ", valor: " << cadena1[i] << endl;
	}
	
	/*EJERCICIO: hacer un programa que imprima un string capturado;
	pero con tres espacios entre cada letra:
	ejm.  HOLA
	resultado:
	H   O   L   A
	*/
	cout << "digitar otra cadena: ";
	getline(cin,cadena1);
	for( int i = 0; i < cadena1.size(); i++ ){
		cout << cadena1[i] << "   ";
	}
	cout << endl;
	
	//transformacion de una cadena de texto a mayusculas/minusculas
	//transformar cadena1 en mayusculas
	//se recomienda sacar una copia de cadena1 y a esa copia
	//aplicarle la transformacion para mantener cadena1 intacta.
	string mayu = cadena1;
	transform(mayu.begin(),mayu.end(),mayu.begin(), ::toupper);
	cout << "la cadena original: " << cadena1 << endl;
	cout << "la cadena en mayusculas: " << mayu << endl;
	
	//transformar a minusculas
	string minu = cadena1;
	transform(minu.begin(),minu.end(),minu.begin(), ::tolower);
	cout << "la cadena original: " << cadena1 << endl;
	cout << "la cadena en minusculas: " << minu << endl;
	
	return 6543;
}

#include<iostream>
using namespace std;

int main(){
	//buscar una cadena dentro de otra
	string str = "Esta es una cadena de texto.";
	string buscar;
	cout << "Digitar el texto a buscar: ";
	getline(cin,buscar);
	
	int posicion;
	posicion = str.find(buscar,0);
	
	if( posicion == -1 )
		cout << "No se encontro" << endl;
	else
		cout << "Encontrado en la posicion " << posicion << endl;
	
	return 321;
}

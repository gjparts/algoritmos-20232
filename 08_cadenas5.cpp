#include<iostream>
using namespace std;

int main(){
	//arreglos de cadenas de texto
	string lista[] = {"rojo","verde","azul","naranja","amarillo"};
	//obtener un elemento manualmente
	cout << lista[1] << endl;
	//obtener un caracter de un elemento
	cout << lista[1][0] << endl;
	//obtener el tamaño de un string dentro de un arreglo
	cout << lista[2].size() << endl;
	
	//hacer un programa que imprima cada elemento del arreglo llamado lista
	//pero colocando un asterisco entre cada caracter de cada string.
	//tamaño del arreglo principal
	int items = end(lista)-begin(lista);
	for( int i = 0; i < items; i++ ){
		//recorrer cada string del arreglo principal, char por char
		for( int j = 0; j < lista[i].size(); j++ ){
			cout << lista[i][j];
			cout << "*";
		}
		cout << endl;
	}
	
	return 321;
}

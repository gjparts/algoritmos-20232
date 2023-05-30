#include<iostream>
#include<time.h>
using namespace std;

int main(){
	//Arreglo bidiomensionales
	//forma 1: declarar sin inicializar
	int arreglo[5][3];
	//posteriormente inicializar sus valores
	arreglo[0][0] = 5;
	arreglo[0][1] = 8;
	arreglo[0][2] = 9;
	
	arreglo[1][0] = 0;
	arreglo[1][1] = 1;
	arreglo[1][2] = 22;
	
	arreglo[2][0] = 4;
	arreglo[2][1] = 3;
	arreglo[2][2] = 100;
	
	arreglo[3][0] = 99;
	arreglo[3][1] = 7;
	arreglo[3][2] = 30;
	
	arreglo[4][0] = 22;
	arreglo[4][1] = 89;
	arreglo[4][2] = 93;
	
	//imprimirlo como tabla o de forma tabular
	for( int i = 0; i < 5; i++ ){
		for( int j = 0; j < 3; j++ ){
			cout << arreglo[i][j] << "\t";
		}
		cout << endl;
	}
	
	//forma 2: declarar el arreglo e inicializarlo (prellenado)
	int tabla[][3] = {
		{ 4, 5, 6 },
		{ 40, 50, 60 },
		{ 400, 500, 600 },
		{ 4000, 5000, 6000 }
	};
	
	//imprimirlo de forma tabular
	int filas = end(tabla)-begin(tabla);
	int columnas = end(tabla[0])-begin(tabla[0]);
	
	cout << "*********************************" << endl;
	for( int i = 0; i < filas; i++ ){
		for( int j = 0; j < columnas; j++ ){
			cout << tabla[i][j] << "\t";
		}
		cout << endl;
	}
	
	return 234;
}

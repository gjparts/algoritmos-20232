#include<iostream>
using namespace std;

int main(){
	//arreglos (estructuras de datos estaticas)
	//forma 1 de declarar arreglos
	//declarar un arreglo sin inicializar
	int arreglo1[5];
	//asignar valores a cada posicion
	arreglo1[0] = 56;
	arreglo1[1] = 4;
	arreglo1[2] = 13;
	arreglo1[3] = 7;
	arreglo1[4] = 99;
	
	//imprimir los valores del arreglo
	for( int i = 0; i < 5; i++ ){
		cout << "posicion:  " << i << "\tvalor: " << arreglo1[i] << endl;
	}
	
	//forma 2 de declarar arreglos
	//declarar arreglo e inicializar con valores predefinidos
	int arreglo2[] = {1, 8, 99, 12, 300, 80, 95, 111, 56, 777, 90, 1500};
	
	cout << "********************************" << endl;
	//imprimir los valores del arreglo
	for( int i = 0; i < 7; i++ ){
		cout << "posicion:  " << i << "\tvalor: " << arreglo2[i] << endl;
	}
	
	//usando usando la version 11 del namespace (-std=c++11)
	int tamanio = end(arreglo2)-begin(arreglo2);
	cout << "arreglo2 tiene un tamanio de " << tamanio << endl;
	cout << "arreglo comienza en " << begin(arreglo2) << endl;
	cout << "arreglo termina en " << end(arreglo2) << endl;
	
	//imprimir los valores del arreglo usando su tamaño
	for( int i = 0; i < tamanio; i++ ){
		cout << "posicion:  " << i << "\tvalor: " << arreglo2[i] << endl;
	}
	
	
	return 876;
}

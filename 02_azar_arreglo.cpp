#include<iostream>
#include<time.h>
using namespace std;

int main(){
	/*EJERCICIO: que hagan un programa que cree un arreglo
	de 50 posiciones, lo llene con numeros al azar entre 10 y 90
	y por ultimo lo imprima.*/
	//inicializar el generador de numeros aleatorios
	srand(time(NULL));
	
	int arreglo[50];
	int tamanio = end(arreglo)-begin(arreglo);
	for(int i = 0; i < tamanio; i++){
		arreglo[i] = rand()%(90-10+1)+10;
		cout << "posicion: " << i << ", valor: " << arreglo[i] << endl;
	}
	
	return 234;
}

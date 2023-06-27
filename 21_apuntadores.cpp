#include<iostream>
#include<cmath>
using namespace std;

//prototipos de funcion
void elevarArregloAlCuadrado( int *arreglo, int tamano );
/*Hacer una funcion que para un arreglo
apuntado de numeros float altere
todos sus elementos diviendo cada uno entre dos.
Imprimir el arreglo resultante.*/
void mitadArreglo( float *arreglo, int tamano );

int main()
{
	/*Uso de apuntadores en arreglos
	Un arreglo es una estructura de datos estatica
	que colecciona apuntadores a otros elementos.
	-> no se puede calcular el tamaño de un arreglo apuntado usando end-begin
	-> cada elemento del arreglo es un apuntador no necesita ponerlo en el ambito externo*/
	
	/*Hacer una funcion void que le enviemos un arreglo apuntado
	de numeros enteros y que le altere todos sus elementos
	elevando cada uno de ellos al cuadrado.
	desde el main: imprimir el arreglo antes y despues
	de aplicarle la funcion*/
	int numeros[] = {1, 3, 8, 9, 10, 11};
	
	cout << "Antes:" <<endl;
	for( int i = 0; i < 6; i++ )
		cout << numeros[i] << endl;
	
	elevarArregloAlCuadrado(numeros,6);

	cout << "Despues:" <<endl;
	for( int i = 0; i < 6; i++ )
		cout << numeros[i] << endl;
	
	float cifras[] = { 10, 5, 2 };
	
	mitadArreglo(cifras,3);
	cout << "Arreglo de cifras:" <<endl;
	for( int i = 0; i < 3; i++ )
		cout << cifras[i] << endl;
	
	return 888;
}
//implementacion
void elevarArregloAlCuadrado( int *arreglo, int tamano ){
	for( int i = 0; i < tamano; i++ ){
		arreglo[i] = pow(arreglo[i], 2);
	}
}

void mitadArreglo( float *arreglo, int tamano ){
	for( int i = 0; i < tamano; i++ ){
		arreglo[i] = arreglo[i]/2;
	}
}








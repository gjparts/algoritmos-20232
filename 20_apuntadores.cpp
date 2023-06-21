/*Hacer un programa que mediante el uso de apuntadores
tenga una funcion void que eleve a determinada potencia
el valor de la variable que le enviemos.
La funcion debe afectar a la variable enviada.
La funcion recibira dos numeros: exponente y base.
Se recomienda usar double.*/
#include<iostream>
#include<cmath>
using namespace std;

//prototipo de funcion
void elevar(double *base, double exponente);
void cuadratica(double *x, double a, double b, double c);
void cuadrado(double *n);

int main(){
	double x = 5;
	elevar(&x,3);
	cout << x << endl;
	
	double y;
	cuadratica(&y,1,4,1);
	cout << y << endl;
	
	double a = 1,b = 4,c =1;
	cuadratica(&y,a,b,c);
	cout << y << endl;
	
	double z = 3;
	cuadrado(&z);
	cout << z << endl;
	
	return 777;
}

//implementacion
void elevar(double *base, double exponente){
	*base = pow(*base,exponente);
}

void cuadratica(double *x, double a, double b, double c){
	*x = ( -b+sqrt( pow(b,2)-4*a*c ) )/(2*a);
}

void cuadrado(double *n){
	*n = *n * *n;
}




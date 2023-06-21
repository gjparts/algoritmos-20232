#include<iostream>
using namespace std;

/*Se usa apuntadores para pasar variables
entre ambitos para que lo que se haga desde un 
ambito externo tenga efecto en el ambito local.*/

//prototipos de funcion
void sumarUno(int n);
void sumarUnoConApuntador(int *n);

int main(){
	//sumarUno recibe un pase por valor
	int x = 5;
	cout << "antes de SumarUno: " << x << endl;
	sumarUno(x);
	cout << "despues de SumarUno: " << x << endl;
	
	//sumarUnoConApuntador recibe un pase por referencia
	cout << "antes de sumarUnoConApuntador: " << x << endl;
	sumarUnoConApuntador(&x);
	cout << "despues de sumarUnoConApuntador: " << x << endl;
	cout << "La direccion en memoria de x es: " << &x << endl;
	
	//INCORRECTO: no se declara y usa variables apuntadas
	//en el propio ambito local solo en ambitos externos
	int *b;
	cout << "Aqui va bien" << endl;
	*b = 50;	//esto hace fallar el programa
	//el programa jamas llega hasta aqui
	cout << b << endl;
	cout << &b << endl;
	
	return 876;
}

//implementacion de funciones
void sumarUno(int n){
	n = n + 1;
	//cout << "n vale " << n << endl;
}

void sumarUnoConApuntador(int *n){
	//ahora n sera una direccion de memoria que hace referencia
	//a la variable que viene desde otro ambito (scope)
	*n = *n + 1;
}





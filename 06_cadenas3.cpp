#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	/*Hacer un programa que capture dos cadenas de texto, 
	luego compararlas si son iguales o no; pero ignorando
	sus mayusculas/minusculas.*/
	string a,b;
	cout << "Digitar primer cadena: ";
	getline(cin,a);
	cout << "Digitar segunda cadena: ";
	getline(cin,b);
	
	//sacar copias de las cadenas
	string copiaA = a, copiaB = b;
	//transformar ambas copias en al mismo character casing
	transform(copiaA.begin(),copiaA.end(),copiaA.begin(), ::toupper);
	transform(copiaB.begin(),copiaB.end(),copiaB.begin(), ::toupper);
	
	if( copiaA == copiaB )
		cout << "Ambas cadenas son iguales ignorando mayusc/minusc." << endl;
	else
		cout << "Ambas cadenas no son iguales." << endl;
	
	return 346;
}



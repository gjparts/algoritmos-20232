#include<iostream>
#include<algorithm>
using namespace std;

//prototipos de funcion
/*hacer una funcion que reciba un string apuntado
y que lo convierta a mayusculas.*/
void mayusculas(string *str);
void minusculas(string *str);
/*hacer una funcion que reciba un string apuntado
y que le reemplace sus espacios en blanco por guiones bajos.*/
void reemplazarEspacios(string *str);

int main(){
	//uso de apuntadores en STRING
	string x = "Gerardo Portillo";
	cout << "antes: " << x << endl;
	mayusculas(&x);
	cout << "despues: " << x << endl;
	minusculas(&x);
	cout << "despues: " << x << endl;
	
	string y = "Hola a todos, bienvenidos.";
	cout << "antes: " << y << endl;
	reemplazarEspacios(&y);
	cout << "despues: " << y << endl;
	
	return 876;
}

//implementacion de funciones
void mayusculas(string *str){
	//sacar una copia del valor de la cadena apuntada y trabajarla localmente
	string copia = *str;
	//transform dentro de su firma no admite variables apuntadas
	transform(copia.begin(), copia.end(), copia.begin(), ::toupper);
	//una vez alterada la copia, sobreescribir a la variable apuntada con dicha copia.
	*str = copia;
}

void minusculas(string *str){
	//sacar una copia del valor de la cadena apuntada y trabajarla localmente
	string copia = *str;
	//transform dentro de su firma no admite variables apuntadas
	transform(copia.begin(), copia.end(), copia.begin(), ::tolower);
	//una vez alterada la copia, sobreescribir a la variable apuntada con dicha copia.
	*str = copia;
}

void reemplazarEspacios(string *str){
	//sacar copia local de la cadena apuntada
	string copia = *str;
	//aplicar trabajo a la copia local
	for( int i = 0; i < copia.size(); i++ ){
		if( copia[i] == ' ' )
			copia[i] = '_';
	}
	//sobreescribir el apuntador de memoria con la copia local
	*str = copia;
}



#include<iostream>
using namespace std;

int main(){
	//conversiones: numero a string
	int numero = 64;
	string cadena1;
	cadena1 = to_string(numero);
	cout << cadena1 << endl;
	
	//conversiones: string a numero
	string cadena2 = "10.2";
	//convertir string a int
	int entero;
	entero = stoi(cadena2);
	cout << entero << endl;
	
	//convertir string a float
	float flotante;
	flotante = stof(cadena2);
	cout << flotante << endl;
	
	//convertir string a double
	double doble;
	doble = stod(cadena2);
	cout << doble << endl;
	
	return 123;
}

#include<iostream>
#include<fstream>
using namespace std;

int main(){
	//Leer un archivo de texto
	//estructura de datos para manipular archivos
	fstream archivo;
	string linea;
	
	//abrir el archivo en modo de lectura (input)
	archivo.open("ejemplo_24mil.txt", ios::in );
	
	//evaluar si el archivo se pudo abrir
	if( archivo.is_open() ){
		cout << "Archivo encontrado." << endl;
		//leer el archivo linea por linea hasta que se cumpla End of File
		int n = 0;	//contador de lineas
		
		while( !archivo.eof() ){
			getline(archivo,linea);
			//si imprimir cada linea el recorrido es mas lento
			//cout << linea << endl;
			n++;
		}
		cout << "Total lineas en el archivo: " << n << endl;
	}
	else
		cout << "Archivo no existe o no tiene permiso de lectura." << endl;
	
	return 765;
}

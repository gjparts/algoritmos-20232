#include<iostream>
#include<fstream>

using namespace std;

int main(){
	fstream archivo;
	
	//ESCRIBIR TEXTO EN UN ARCHIVO
	//ojo si el archivo no existe, se creara
	//ios::app	APPEND	inserta una nueva linea al final del archivo sin perder lo que ya estaba
	//ios::out	OUT		sobreescribe el archivo perdiendo lo que ya estaba (overwrite)
	archivo.open("salida.txt", ios::app);
	
	if( archivo.is_open() ){
		archivo << "Este es un renglon" << endl;
		archivo << 2+2 << endl;
		archivo << "Hola a todos" << "\tAdios" << endl;
		
		//cerrar el archivo
		archivo.close();
	}
	else
		cout << "Archivo no existe y no tiene permiso para abrirlo." << endl;
	
	return 54321;
}

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
		int m = 0;	//contador de lineas que se pudieron convertir a numero
		int pares = 0;
		int impares = 0;
		int suma = 0;	//acumulador
		while( !archivo.eof() ){
			getline(archivo,linea);
			
			//cada linea leida la convierto a double para sumarla
			try{
				suma += stoi(linea);
				m++;	//si llego aqui la conversion a num fue exitosa
						//aumentamos el contador de numeros convertidos
				if( stoi(linea)%2 == 0 )
					pares++;
				else
					impares++;
			}catch(exception ex){
				//algo salio mal
			}
			
			n++;
		}
		cout << "Total lineas en el archivo: " << n << endl;
		cout << "Suma de numeros dentro del archivo: " << suma << endl;
		cout << "Promedio: " << (suma/m) << endl;
		cout << "Pares: " << pares << "\t" << "Impares: " << impares << endl;
	}
	else
		cout << "Archivo no existe o no tiene permiso de lectura." << endl;
	
	return 765;
}

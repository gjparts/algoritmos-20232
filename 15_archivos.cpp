#include<iostream>
#include<fstream>

using namespace std;

int main(){
	/*Hacer un programa que muestre un menu:
	DIARIO
	1) Agregar entrada al diario
	2) Mostrar todo el diario
	3) Salir
	Digitar la opcion deseada: 
	
	* el menu se volverá a mostrar hasta que el usuario
	  seleccione la opcion de salir
	* en la opcion 1:	  la entrada se escribirá al final del diario
	* en la opcion 2 al imprimir el diario hacer una pausa cada 10 lineas*/
	
	string opcion;
	int numeroOpcion;
	
	fstream archivo;
	string linea;
	
	do{
		system("cls");	//limpia la consola
		cout << "****** DIARIO ******" << endl;
		cout << "1) Agregar entrada al diario" << endl;
		cout << "2) Mostrar todo el diario" << endl;
		cout << "3) Salir" << endl;
		cout << "Digitar la opcion deseada: ";
		getline(cin,opcion);
		
		try{
			numeroOpcion = stoi(opcion);
		}catch(exception ex){
			cout << "Debe digitar un numero." << endl;
			system("pause");
			continue; //pasar a la iteracion siguiente, ignora la actual
		}
		
		switch(numeroOpcion){
			case 1:
				cout << "Digite la nueva entrada: ";
				getline(cin,linea);
				//abrir el archivo en modo append
				archivo.open("diario.txt",ios::app);
				
				if( archivo.is_open() )
				{
					archivo << linea << endl;
					archivo.close();
				}
				else
					cout << "Archivo no existe o no tiene permisos." << endl;
			break;
			case 2:
				//abrir el archivo en modo lectura (input)
				archivo.open("diario.txt",ios::in);
				if( archivo.is_open() )
				{
					int n = 0;	//contador de lineas
					while(!archivo.eof())
					{
						getline(archivo,linea);
						n++;	//sumar 1 al contador de lineas
						
						cout << n << "\t" << linea << endl;
						
						//hacer una pausa cada diez lineas
						if( n%10 == 0 )
							system("pause");
					}
					archivo.close();	//cerrar el archivo
				}
				else
					cout << "Archivo no existe o no tiene permisos." << endl;
			break;
			case 3:
				cout << "Adios" << endl;
			break;
			default:
				cout << "opcion no valida." << endl;
		}
		system("pause");
		
	}while( opcion != "3" );
	
	
	return 234;
}

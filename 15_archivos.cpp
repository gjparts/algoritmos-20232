#include<iostream>

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
				cout << "opcion 1" << endl;
			break;
			case 2:
				cout << "opcion 2" << endl;
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

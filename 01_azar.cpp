#include<iostream>
#include<time.h>
using namespace std;

int main(){
	//generar un numero al azar
	int azar;
	//inicializar el generador de numeros al azar
	//usando la fecha y hora del sistema
	srand( time(NULL) );
	//generar el numero al azar
	//generar un numero al azar entre 4 y 17
	azar = rand()%(17-4+1)+4;
	cout << azar << endl;
	
	//generemos varios numeros al azar entre 5 y 125
	for( int i = 1; i <= 10; i++ ){
		azar = rand()%(125-5+1)+5;
		cout << azar << endl;
	}
	
	return 456;
}

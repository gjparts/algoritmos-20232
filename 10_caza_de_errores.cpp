#include<iostream>
using namespace std;

int main(){
	//caza de errores
	string valor;
	cout << "Digitar un valor: ";
	getline(cin,valor);
	
	try{
		//aqui va el codigo propenso a falla
		int numero = stoi(valor);
		cout << "El numero digitado es correcto." << endl;
	}catch(exception ex){
		//aqui va el codigo a ejecutar en caso de falla
		cout << "El numero digitado es incorrecto." << endl;
	}
	
	return 123;
}

#include <iostream>
#include <limits>

using namespace std;

// Declarar variables globales
int n1, n2;

// Declaracion de funciones
int suma(int num1, int num2) {
	return num1 + num2;
}

// Funcion para sumar los numeros almacenados en las variables globales
int suma_numeros() {
	return n1 + n2;
}

void solicitarnumeros() {
	cout << "Ingrese el primer numero: ";
	cin >> n1;
	cout << "Ingrese el segundo numero: ";
	cin >> n2;
}

int main() {
	int resultado;
	
	solicitarnumeros();
	resultado = suma_numeros();
	cout << "Suma de dos numeros: " << resultado << endl;
	
	solicitarnumeros();
	resultado = suma_numeros();
	cout << "Suma de dos numeros: " << resultado << endl;
	
	return 0;
}

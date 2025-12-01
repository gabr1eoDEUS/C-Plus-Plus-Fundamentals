#include <iostream>
using namespace std; 

int main() {
	int number;
	cout << "Enter a number: ";
	cin >> number; // Leitura do número.

	// 1. Condição IF: Testa a paridade.
	// Operador Módulo (%): Retorna o resto da divisão por 2.
	// Se o resto for 0, o número é PAR. A condição é TRUE.
	if (number % 2 == 0) {
		// Bloco IF: Executado se a condição for TRUE (Número Par).
		cout << "Even number." << endl;
	}
	
	// 2. Condição ELSE: Caminho Alternativo.
	else {
		// Bloco ELSE: Executado se a condição IF for FALSE (Número Ímpar).
		cout << "odd number." << endl;
	}

	return 0;
}

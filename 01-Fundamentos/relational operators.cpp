#include <iostream>
using namespace std; // Usado para simplificar cout/cin neste exemplo.

int main() {
	// Variável 'x' declarada como inteiro.
	int x;
    
	// Solicita entrada ao usuário.
	cout << "Enter a number: ";
	cin >> x;

	// 1. Operador Relacional:
	// A expressão 'x > 10' é uma COMPARAÇÃO.
	// O resultado é SEMPRE um valor booleano (true ou false).
	// bool valorMaior = x > 10;
	bool valorMaior = x > 10; 
	
	// Nota de Rigidez: 
	// == (Igualdade) e != (Diferente) são outros operadores relacionais cruciais.
	// '=' (Atribuição) é diferente de '==' (Igualdade).

	// 2. Saída:
	// Imprime a pergunta e o resultado booleano.
	// Se 'valorMaior' for true, o console imprimirá '1'; se for false, imprimirá '0'.
	cout << x << " > 10 ? " << valorMaior << endl;

	return 0;
}

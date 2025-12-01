#include <iostream>
using namespace std; 

int main() {
	int x; // Variável 'x' declarada para armazenar o valor inicial.
	
    // Entrada: Solicita o valor inicial do usuário.
	cout << "Enter the initial value: ";
	cin >> x;

	// 1. Operador de Adição e Atribuição:
	x += 10; // Equivalente a: x = x + 10;
	cout << "Após + = 10: " << x << endl;
    
	// 2. Operador de Subtração e Atribuição:
	x -= 9; // Equivalente a: x = x - 9;
	cout << "Após - = 9: " << x << endl;
    
	// 3. Operador de Multiplicação e Atribuição:
	x *= 8; // Equivalente a: x = x * 8;
	cout << "Após * = 8: " << x << endl;
    
	// 4. Operador de Divisão e Atribuição:
	// Nota: Se 'x' for ímpar antes, o resultado será truncado (divisão inteira).
	x /= 7; // Equivalente a: x = x / 7;
	cout << "Após / = 7: " << x << endl;
    
	// 5. Operador de Módulo e Atribuição:
	x %= 6; // Equivalente a: x = x % 6; (Armazena o resto da divisão por 6).
	cout << "Após % = 6: " << x << endl;

	return 0;
}

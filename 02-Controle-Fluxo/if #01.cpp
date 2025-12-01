#include <iostream>
using namespace std; 

int main() {
	double finalGrade; 
	// Rigidez: Uso de double para permitir notas decimais.
	
	cout << "Enter the final grade: ";
	cin >> finalGrade; // Leitura da nota.

	// 1. Estrutura de Decisão Simples (IF):
	// O comando 'if' avalia a condição entre parênteses.
	// Condição Relacional: finalGrade >= 7 -> produz um resultado booleano (true ou false).
	if (finalGrade >= 7) {
		// Bloco de Código:
		// Se a condição for TRUE, este bloco (delimitado por chaves {}) é executado.
		cout << "Excellent grade." << endl;
	}
    
    // Se a condição for FALSE, o programa simplesmente ignora o bloco 'if' e continua a execução.

	return 0;
}

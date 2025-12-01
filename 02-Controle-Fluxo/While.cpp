#include <iostream>
using namespace std; 

int main() {
	// 1. WHILE: Repetição Indeterminada (Aula 36)
	int number = 0; // Variável de controle (sentinela).
	int total = 0;  // Acumulador da soma total (inteiro).
	int qtd = 0;    // Contador de valores válidos.

	// A condição é testada ANTES de cada execução. O loop roda até que 'number' seja -1.
	while (number != -1) {
		cout << "Enter a number[ -1 to finish]: ";
		cin >> number;
		
		// Estrutura de Proteção: Evita que o valor sentinela (-1) seja somado.
		if (number != -1) {
			total += number; // Acumula o valor (Operador +=).
			qtd++;           // Incrementa o contador (Operador ++).
		}
	}
	
	// Rigidez: Type Casting para Precisão (Conversão de Tipo)
	// Força o 'total' (int) a ser tratado como 'double' para que a divisão resulte em decimal.
	double avg = ((double) total) / qtd; 
	cout << "Media: " << avg << endl;

	// ----------------------------------------------------

	// 2. WHILE: Repetição Determinada (Aula 37)
	int i = 0; // Variável de controle (contador).

	// O loop é pré-testado e executado enquanto 'i' for menor ou igual a 10.
	while (i <= 10) { 
		cout << i << endl;
		// A instrução de incremento é OBRIGATÓRIA para evitar Loop Infinito.
		i++; 
	}

	return 0;
}

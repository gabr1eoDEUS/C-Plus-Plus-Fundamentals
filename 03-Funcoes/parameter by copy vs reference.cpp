#include <iostream>
#include <string>
using namespace std;

// 1. PROTÓTIPOS
// Passagem por Valor (Cópia): int value.
void incCopy(int value);
// Passagem por Referência: int& value (recebe o endereço).
void incReference(int& value); 

int main() {
	int x = 1;

	// CHAMADA 1: PASSAGEM POR CÓPIA
	// A função incCopy recebe uma CÓPIA do valor 1.
	incCopy(x); 
	
	// Rigidez: A alteração na cópia DENTRO da função não afeta 'x'.
	cout << "Valor de 'x' após incCopy: " << x << endl; // Saída: 1
	
	cout << "--------------------------------\n";

	// CHAMADA 2: PASSAGEM POR REFERÊNCIA
	// A função incReference recebe um APELIDO (referência) para a variável 'x'.
	incReference(x); 
	
	// Rigidez: A alteração é feita diretamente no endereço de memória de 'x'.
	cout << "Valor de 'x' após incReference: " << x << endl; // Saída: 2

	return 0;
}

// DEFINIÇÃO 1: CÓPIA
void incCopy(int value) {
	// 'value' é uma variável local temporária. Aumenta de 1 para 2.
	value++; 
}

// DEFINIÇÃO 2: REFERÊNCIA
void incReference(int& value) {
	// 'value' é um apelido para o 'x' original. Aumenta de 1 para 2 (no main).
	value++; 
}

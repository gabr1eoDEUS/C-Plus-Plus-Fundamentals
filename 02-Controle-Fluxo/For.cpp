#include <iostream>
using namespace std; 

int main() {
	
	// ESTRUTURA FOR: Agrupa os três elementos de controle em uma única linha.
	// 1. Inicialização: int i = 0 (Executada apenas uma vez).
	// 2. Condição: i < 10 (Testada ANTES de cada iteração).
	// 3. Finalização/Incremento: i++ (Executada DEPOIS de cada iteração).
	for (int i = 0; i < 10; i++) {
		// Bloco do Loop: Executa 10 vezes (de i=0 até i=9).
		// Rigidez: A variável 'i' existe APENAS dentro deste bloco (escopo local).
		cout << i << endl;
	}
    
    // Após o loop, o programa segue para o próximo comando.

	return 0;
}

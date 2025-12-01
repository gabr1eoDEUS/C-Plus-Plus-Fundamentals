#include <iostream>
using namespace std; 

int main() {
	// 1. ESTRUTURA BREAK: Interrompe e Sái do Loop
	for (int i = 0; i < 10; i++) {
		if (i == 5) {
			// BREAK: Ao ser executado, o comando ENCERRA IMEDIATAMENTE o loop FOR.
			// A execução é transferida para o código logo após o bloco FOR.
			break; 
		}
		cout << i << endl; // Este comando só é executado se i != 5.
	}
	cout << "end" << endl; // Executado após o loop ser encerrado (i == 5).

	// ---------------------------------------------------------------------

	// 2. ESTRUTURA CONTINUE: Pula a Iteração Atual
	for (int i = 0; i < 10; i++) {
		if (i == 5) {
			// CONTINUE: Interrompe apenas a ITERAÇÃO ATUAL.
			// A execução PULA o restante do corpo do loop (cout << i << endl;)
			// e vai diretamente para a expressão de Finalização (i++).
			continue; 
		}
		cout << i << endl; // O valor 5 NUNCA será impresso.
	}
	cout << "end" << endl; // Executado após o loop terminar (i == 9).

	return 0;
}

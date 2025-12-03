#include <iostream>
#include <string>
using namespace std;

// 1. Protótipo da função (retorno void)
void log(string text);

int main() {
	// Chamada 1: Executa a lógica
	log("Ola."); 
	// Chamada 2: Força a saída antecipada (Early Exit)
	log("");   

	return 0;
}

// 2. Definição da função com Saída Antecipada (Early Exit)
void log(string text) {
	// A função pode ter múltiplos comandos 'return'.
	if (text.empty()) {
		// Rigidez: O 'return;' em uma função void encerra IMEDIATAMENTE a função
		// e evita que o código abaixo seja executado. (Early Exit)
		return; 
	}
	
	// Se o 'return' acima não for executado, o fluxo continua:
	cout << "Text: " << text << endl;
	
	// O 'return;' no final da função void é implícito, mas pode ser escrito.
	return; 
}

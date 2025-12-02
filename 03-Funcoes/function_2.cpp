#include <iostream>
#include <string>
using namespace std;

// 1. PROTÓTIPO DE FUNÇÃO (Forward Declaration):
// Declara a assinatura da função (tipo de retorno, nome, parâmetros) ANTES da função 'main'.
// Isso informa ao compilador que a função 'log' existe e será definida posteriormente.
void log(int number, bool newLine = true); 

int main() {
	// Chamadas explícitas: O valor padrão 'true' é SOBRESCRITO pelo 'false'.
	log(3, false); // Saída: "Number: 3 "
	log(4, false); // Saída: "Number: 4 "
    
    // Testando o valor padrão: Se fosse chamada como log(5), usaria o valor 'true'.
	log(5);      // Saída: "Number: 5\n" (Imprime nova linha, usando o 'true' padrão)

	return 0;
}

// 2. ARGUMENTOS PADRÃO (DEFAULT):
// O argumento 'newLine' tem um valor padrão de 'true'.
// Se a chamada da função omitir este argumento (Ex: log(5)), o valor 'true' será usado.
void log(int number, bool newLine = true) {
	cout << "Number: " << number;
    
    // Operador Ternário: Se newLine for true, imprime '\n'; caso contrário, imprime ' '.
	newLine ? cout << endl : cout << " ";
}

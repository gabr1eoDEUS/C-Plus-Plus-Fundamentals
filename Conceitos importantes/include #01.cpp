#include <iostream>
#include <string>
using namespace std;
int main() {
	cout << "#include - Teste de Substituicao" << endl;
	return 0;
	// Essa chave de fechamento foi propositalmente comentada para o teste.
	// O compilador espera uma chave para fechar 'main()' antes de terminar o arquivo.
#include "include.h" 
// O PRÉ-PROCESSADOR substitui esta linha pelo conteúdo de "include.h" (que é apenas '}').
// O compilador vê:
// [ código anterior ]
// return 0;
// } <--- Esta chave encerra main()
} // <--- Caso o arquivo não tivesse o 'include', o erro estaria aqui.
// No código final que o compilador vê, a estrutura está correta.

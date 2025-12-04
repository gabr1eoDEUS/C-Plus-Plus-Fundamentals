#define SQUARE(x) x * x // Macro definida, será incluída pelo #ifdef
// #define DEBUG 0      // Se esta linha for descomentada, a macro DEBUG é definida.

#include <iostream>
#include <string> 
using namespace std;

int main() {
// 1. COMPILAÇÃO CONDICIONAL: #ifdef (Se a macro estiver definida)
#ifdef SQUARE
	cout << "SQUARE está definido." << endl;
	// O pré-processador inclui este bloco.
	cout << "SQUARE(10) -> " << SQUARE(10) << endl; // Expande para 10 * 10
	
	// PITFALL DA MACRO: Expande para 1 + 2 * 1 + 2 (Resultado: 5, não 9)
	cout << "SQUARE(1 + 2) -> " << SQUARE(1 + 2) << endl; 
#else
	// Se SQUARE não estivesse definida, este bloco seria incluído.
	cout << "SQUARE is not defined" << endl;
#endif

// 2. COMPILAÇÃO CONDICIONAL: #if (Se a expressão for verdadeira)
// O pré-processador trata macros não definidas dentro do #if como ZERO (0).
#if DEBUG == 0
	cout << "Debug mode is off (DEBUG não definido, tratado como 0)." << endl;
#endif
	return 0;
}

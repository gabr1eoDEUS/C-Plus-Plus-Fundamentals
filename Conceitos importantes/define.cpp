#define ZERO 0          // 1. MACRO CONSTANTE: Pré-processador substitui 'ZERO' por '0'.
#define SQUARE(x) x * x // 2. MACRO FUNCIONAL: Pré-processador substitui 'SQUARE(10)' por '10 * 10'.

// 🚨 RIGOR: MACRO PITFALL (Armadilha)
// Se você chamasse SQUARE(10 + 2), o pré-processador expandiria para:
// 10 + 2 * 10 + 2 (Resultado errado: 32)
// A definição rigorosa e segura deveria ser: #define SQUARE(x) ((x) * (x))

#include <iostream>
#include <string> 
using namespace std;

int main() {
	// Chamada que funciona (substitui por 10 * 10):
	cout << "SQUARE(10): " << SQUARE(10) << endl; 
    
	// Chamada que funciona (substitui por 0):
	return ZERO; 
}

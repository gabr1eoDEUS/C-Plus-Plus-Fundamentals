#include <iostream>
#include <string>
using namespace std;

// 1. TYPEDEF (Forma Mais Antiga):
// Cria um apelido (alias) 'id' para o tipo primitivo 'int'.
// Uso principal: simplificar tipos complexos e melhorar a legibilidade.
typedef int id; 

// 2. USING (Forma Moderna - Preferida):
// Cria um apelido 'counter' para o tipo primitivo 'long'.
// É mais flexível e legível em contextos complexos (como templates).
using counter = long; 

int main() {
	// Variáveis declaradas usando os novos apelidos:
	id a = 5;       // 'a' é, na verdade, um 'int'
	counter b = 10; // 'b' é, na verdade, um 'long'

	// A operação é executada normalmente, pois o tipo subjacente é o que conta.
	cout << "Soma (int + long): " << a + b << endl; 

	return 0;
}

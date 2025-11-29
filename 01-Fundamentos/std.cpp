// Diretiva essencial para I/O.
#include <iostream>

// IMPORTANTE:
// Diretiva que importa TODO o namespace 'std' para o escopo global.
// Isso permite o uso de 'cout' e 'endl' sem o prefixo 'std::'.
// (Recomendado evitar em projetos grandes devido a conflitos de nomes!)
using namespace std; 

int main() {
    
    // 1. Uso Rigoroso:
    // Mesmo com o 'using namespace std;', esta é a forma mais clara e
    // segura (rigorosa) de usar o comando, especificando a origem (std::).
	std::cout << "Hello, World!" << std::endl;
    
    // 2. Uso Simplificado:
    // Este uso só é possível graças à diretiva 'using namespace std;' acima.
    // O compilador sabe que 'cout' e 'endl' devem vir do namespace 'std'.
	cout << "Hello, World!" << endl;
    
	return 0;
}

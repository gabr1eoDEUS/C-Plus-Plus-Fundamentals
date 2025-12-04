#include <iostream>
#include <string> 
using namespace std;

// Esta é a função na ESCOPO GLOBAL.
int add(int a, int b) {
	return a + b + 10;
}

// DEFINIÇÃO DO NAMESPACE: Um contêiner para evitar colisão de nomes.
namespace calc { 
	// Esta função 'add' está ISOLADA da função global.
	int add(int a, int b) {
		return a + b + 20;
	}
}

int main() {
	// Chamada implícita: O compilador chama a função 'add' no escopo atual (Global).
	cout << "Soma Global (2+3+10): " << add(2, 3) << endl;              
    
	// Acesso Qualificado: Resolve a ambiguidade usando '::' para chamar a função dentro de 'calc'.
	cout << "Soma Namespace (2+3+20): " << calc::add(2, 3) << endl;       
	
	return 0;
}

#include <iostream>

// IMPORTANTE: 'using namespace std;' está sendo usado para simplificar
// o código, permitindo 'cout' e 'cin' sem o prefixo 'std::'.
// No entanto, o uso explícito de std:: é o padrão mais rigoroso!
using namespace std; 

int main() {
    
	// 1. Saída (Output):
	// O operador de inserção << direciona a string para o fluxo de saída (console).
	cout << "Hi" << endl;

	// 2. Entrada (Input):
	// A variável 'name' é declarada como 'string', o tipo moderno para texto.
	string name;
    
	// Solicita ao usuário a entrada.
	cout << "Enter your name: ";
    
	// O operador de extração >> lê o dado digitado pelo usuário e armazena em 'name'.
	// Rigidez: cin >> name PARA de ler no primeiro espaço em branco encontrado.
	cin >> name; 
    
	// 3. Processamento e Saída:
	// Combinação (encadeamento) de texto e o valor da variável lida.
	cout << "Hello, " << name << "!" << endl;
    
	// Sinaliza o término da execução com sucesso.
	return 0;
}

#include <iostream>
#include <string> // Rigidez: Incluir <string> é necessário para usar std::string
using namespace std; 

int main() {
    
    // 1. Diferentes Formas de Inicializar uma string:
    
    // Inicialização direta: Forma mais comum e legível.
	string title = "OX"; 
    
    // Construtor: Inicialização usando a sintaxe de função (mais comum em POO).
	string name("Gabriel"); 
    
    // Construtor com Repetição: Inicializa a string com 3 cópias do caractere '!'.
	string end(3, '!'); 

    // 2. Métodos e Propriedades (Funcionalidades de Objeto):
    
    // .size(): Retorna o número de caracteres (length) na string.
	cout << "Tamanho: " << name.size() << endl; 
    
    // .back(): Retorna o último caractere da string. (Função de Objeto)
	cout << "Último Caractere: " << name.back() << endl;
    
    // name[0]: Acesso direto ao caractere na posição 0 (indexação de array).
	cout << "Primeiro Caractere: " << name[0] << endl;

    // Imprime o resultado do construtor de repetição.
	cout << "Fim: " << end << endl; 

    // 3. Concatenação (Operador Sobrecarrregado):
    // O operador '+' é usado para unir (concatenar) strings.
	cout << "Resultado: " << title + " " + name + end << endl;

	return 0;
}

#include <iostream>
#include <string>
using namespace std;

// Alias para Ponteiro de Função (Revisitado da Aula 67)
using binaryop = int(*)(int, int); 

// 1. LAMBDA (Sintaxe Completa):
// [Captura] (Parâmetros) -> TipoRetorno { Corpo }
// 'add' é uma função anônima que soma x e y.
auto add = [](int x, int y) -> int { return x + y; };

// 2. LAMBDA (Dedução de Tipo):
// O tipo de retorno (-> int) é OMITIDO, pois o compilador C++ o deduz de 'return x - y;'.
auto subtract = [](int x, int y) { return x - y; }; 

// 3. Função de Ordem Superior que aceita um Ponteiro de Função
int exec(binaryop func, int a, int b) {
	return (*func)(a, b);
}

int main() {
	cout << "Soma (Lambda nomeada): " << add(10, 20) << endl;
	cout << "Subtração (Lambda nomeada): " << subtract(10, 5) << endl;
    
	// 4. LAMBDA ANÔNIMA COMO ARGUMENTO:
	// A função Lambda é definida e passada DIRETAMENTE para 'exec'.
	// Rigidez: Lambdas SEM Captura ([]) DECAEM (convertem-se implicitamente) 
	// para o tipo Ponteiro de Função 'binaryop'.
	cout << "Multiplicação (Lambda anônima): " << exec([](int x, int y) { return x * y; }, 5, 5) << endl;
    
	return 0;
}

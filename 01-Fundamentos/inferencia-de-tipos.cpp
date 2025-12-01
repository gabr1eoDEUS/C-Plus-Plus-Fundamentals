#include <iostream>
#include <typeinfo> // Necessário para usar o operador typeid()
using namespace std;

int main() {
    
	// 1. Inferência de Tipos (Palavra-chave 'auto'):
	// O tipo da variável é deduzido pelo compilador a partir do valor inicial.
	// O tipo é fixo estaticamente após a dedução inicial.
	
	auto a = 1; // O compilador infere 'int' (padrão para inteiros).
	auto b = 1.2; // O compilador infere 'double' (padrão para decimais).
	auto c = false; // O compilador infere 'bool'.

	// 2. Verificação Rigorosa (typeid):
	// typeid().name() retorna o nome do tipo deduzido pelo compilador.
	cout << "Tipo de 'a' (int): " << typeid(a).name() << endl;
	cout << "Tipo de 'b' (double): " << typeid(b).name() << endl;
	cout << "Tipo de 'c' (bool): " << typeid(c).name() << endl;

	return 0;
}

#include <iostream>
#include <string>
using namespace std;

// ---------------------------------------------------------------------
// 1. Funções sem Retorno (void) e sem Parâmetros
// Uso do 'void' indica que a função executa uma ação, mas NÃO devolve um valor.
void sayHello() {
	cout << "Ola, mundo.\n";
}

// 2. Funções sem Retorno (void) e COM Parâmetros
// O parâmetro 'string name' recebe o dado de entrada no momento da chamada.
void sayHelloTo(string name) {
	cout << "Ola " << name << ", seja bem-vindo.\n";
}

// ---------------------------------------------------------------------
// 3. Funções COM Retorno (string) e sem Parâmetros
// O 'string' indica que a função DEVE retornar um valor do tipo string.
string returnHi() {
	// O 'return' encerra a função e devolve o valor especificado.
	return "Ola, sou o returnHi\n";
}

// 4. Funções COM Retorno (string) e COM Parâmetros
string returnHiTo(string name) {
	return "Hi " + name + "!\n";
}
// ---------------------------------------------------------------------

int main() {
	// Chamadas das funções:
	sayHello();
	sayHelloTo("Gabriel");
    
	// 5. Tratamento do Retorno:
	// O valor de retorno da função é armazenado na variável 'result'.
	string result = returnHi();
	cout << result << endl;
    
	// O valor de retorno pode ser usado diretamente na função de saída (cout).
	cout << returnHi() << endl;
	cout << returnHiTo("Gabriel") << endl;
    
	return 0;
}

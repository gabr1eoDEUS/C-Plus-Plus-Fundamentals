#include <iostream>
using namespace std; 

int main() {
	int x, y, z; 
	// Declaração de múltiplas variáveis inteiras na mesma linha.
	
	cout << "Digite 3 numeros: ";
	// Leitura sequencial dos três valores.
	cin >> x;
	cin >> y;
	cin >> z;

	// 1. Estrutura IF:
	// Condição: Testa se 'x' é maior que 'y' E (&&) maior que 'z'.
	if (x > y && x > z) {
		// Bloco IF: Se a primeira condição for TRUE, imprime 'x' e PULA o resto da estrutura.
		cout << "O maior é: " << x << endl;
	}
	// 2. Estrutura ELSE IF:
	// Condição: Testa se 'y' é maior que 'x' E (&&) maior que 'z'.
	// SÓ é avaliado se o IF anterior foi FALSE.
	else if (y > x && y > z) {
		// Bloco ELSE IF: Se esta condição for TRUE, imprime 'y' e PULA o ELSE final.
		cout << "O maior é: " << y << endl;
	}
	// 3. Estrutura ELSE (Caminho Padrão):
	// Bloco ELSE: SÓ é executado se TODAS as condições IF/ELSE IF anteriores falharam.
	// Rigidez: Se o programa chegou aqui, significa que 'z' é o maior ou é igual aos outros dois.
	else {
		cout << "O maior é: " << z << endl;
	}

	
	return 0;
}

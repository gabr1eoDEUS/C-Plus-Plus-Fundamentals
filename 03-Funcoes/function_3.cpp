#include <iostream>
#include <string>
using namespace std;

// 1. Protótipo (Forward Declaration): Informa o compilador sobre a função.
int retornarMaiorNum(int n1, int n2, int n3); 

int main() {
	int n1, n2, n3;
	cout << "Digite 3 numeros(inteiros): ";
	cin >> n1;
	cin >> n2;
	cin >> n3;
    
	// 2. Chamada da Função: O valor de retorno é passado diretamente para o cout.
	cout << "O numero maior e: " << retornarMaiorNum(n1, n2, n3) << endl;
	
	return 0;
}

// 3. Definição da Função: Combinação de funções com controle de fluxo.
// O tipo de retorno é 'int', garantindo que a função sempre devolva um número inteiro.
int retornarMaiorNum(int n1, int n2, int n3) {
	// CORRIGIDO: O operador deve ser o de 'maior que' (>) e não o de 'shift' (>>).
	if (n1 > n2 && n1 > n3) {
		return n1; // Encerra a função e retorna n1.
	}
	else if (n2 > n1 && n2 > n3) {
		return n2; // Encerra a função e retorna n2.
	}
	else {
		// Se as condições acima falharem, n3 é o maior ou igual aos outros.
		return n3; // Encerra a função e retorna n3.
	}
}

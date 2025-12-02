#include <iostream>
#include <string>
using namespace std;

int main() {
	double pi = 3.14;
	// piRef é um apelido (Referência) para o endereço de memória de 'pi'.
	double& piRef = pi; 

	// 1. & (Endereçamento): Retorna o ENDEREÇO de memória da variável pi/piRef.
	cout << "Endereço de pi/piRef: " << &piRef << endl; 

	// 2. * (Desreferência): O processo inverso.
	// O operador '*' LÊ o conteúdo (valor) que está armazenado no endereço retornado por '&piRef'.
	cout << "Valor no Endereço: " << *&piRef << endl; // Saída: 3.14

	return 0;
}

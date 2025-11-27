#include <iostream>
#include <string>
using namespace std;
int main() {
	int estoqueAtual = 45;
	int valorTotalCentavos = 780;
	int quantidadeDoisReais = valorTotalCentavos / 200;
	int trocoCentavos = valorTotalCentavos % 200;
	estoqueAtual -= 10;
	cout << "Estoque atual: " << estoqueAtual << " unidades" << endl;
	cout << "Quantidade de moedas de 2 reais: " << quantidadeDoisReais << endl;
	cout << "Troco restante em centavos: " << trocoCentavos << " centavos" << endl;
	return 0;
}

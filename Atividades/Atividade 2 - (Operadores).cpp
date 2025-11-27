#include <iostream>
#include <string>
using namespace std;
int main() {
	double salarioBruto = 3550.75;
	double descontoFixo = (11.0/100.0) * salarioBruto;
	double descontoSindical = 85.00;
	double salarioLiquido = salarioBruto - descontoFixo - descontoSindical;
	cout << "Salario Bruto: R$ " << salarioBruto << endl;
	cout << "Desconto Fixo (11%): R$ " << descontoFixo << endl;
	cout << "Desconto Sindical: R$ " << descontoSindical << endl;
	cout << "Salario Liquido: R$ " << salarioLiquido << endl;
	return 0;
}

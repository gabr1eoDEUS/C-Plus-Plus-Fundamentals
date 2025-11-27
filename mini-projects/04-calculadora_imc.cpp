#include <iostream>
using namespace std;
class Pessoa {
private:
	float peso;
	float altura;
public:
	Pessoa(float p, float a) {
		peso = p;
		altura = a;
	}
	float calcularIMC() {
		return peso / (altura * altura);
	}
};
int main() {
	float peso, altura;
	cout << "Digite o peso (kg): ";
	cin >> peso;
	cout << "Digite a altura (m): ";
	cin >> altura;
	Pessoa p1(peso, altura);
	cout << "IMC: " << p1.calcularIMC() << endl;
	return 0;
}

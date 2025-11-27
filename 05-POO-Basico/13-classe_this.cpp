#include <iostream>
#include <string>
using namespace std;
class Retangulo {
private:
	float largura = 0.0;
	float altura = 0.0;
public:
	Retangulo(float largura, float altura) {
		this->largura = largura;
		this->altura = altura;
	}
	float calcularArea() {
		return largura * altura;
	}
};
int main() {
	Retangulo r1(5.0, 3.0);
	cout << "Area do retangulo: " << r1.calcularArea() << endl;
    return 0;
}

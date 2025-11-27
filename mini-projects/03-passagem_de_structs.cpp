#include <iostream>
#include <string>
using namespace std;
struct Ponto {
	float x = 0.0;
	float y = 0.0;
};
void moverPonto(Ponto& ponto, float dx, float dy);
void imprimirPonto(const Ponto& ponto);
int main() {
	Ponto p1 = {0.0f, 0.0f};
	moverPonto(p1, 1.0f, 2.0f);
	imprimirPonto(p1);
    return 0;
}
void moverPonto(Ponto &ponto, float dx, float dy) {
	ponto.x += dx;
	ponto.y += dy;
}
void imprimirPonto(const Ponto &ponto) {
	cout << "Ponto(" << ponto.x << ", " << ponto.y << ")" << endl;
}

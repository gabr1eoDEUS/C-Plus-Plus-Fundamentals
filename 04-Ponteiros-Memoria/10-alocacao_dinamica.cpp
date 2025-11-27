#include <iostream>
using namespace std;
int main() {
    int* ptrNumero;
    ptrNumero = new int;
    int valor;
	cout << "Digite um valor inteiro: ";
	cin >> valor;
	*ptrNumero = valor;
	cout << "Valor: " << *ptrNumero << endl;
	cout << "Enderecamento: " << ptrNumero << endl;
	delete ptrNumero;
	ptrNumero = nullptr;
    return 0;
}

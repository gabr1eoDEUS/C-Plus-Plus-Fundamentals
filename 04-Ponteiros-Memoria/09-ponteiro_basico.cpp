#include <iostream>
using namespace std;
int main() {
    int idade = 30;
    int* ptrIdade;
	ptrIdade = &idade;
	cout << "Idade: " << &idade << endl;
	cout << "ptrIdade: " << ptrIdade << endl;
	cout << "Idade: " << *ptrIdade << endl;
	*ptrIdade = 40;
	cout << "Valor final de idade: " << idade << endl;
    return 0;
}

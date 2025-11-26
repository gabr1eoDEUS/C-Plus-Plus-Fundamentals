#include <iostream>
using namespace std;
int main() {
	int num = 0;
	cout << "Digite um numero inteiro: ";
	cin >> num;
	cout << "Tabuada de " << num << ":" << endl;
	for(int i = 0; i <= 10; i++) {
		cout << num << " x " << i << " = " << num * i << endl;
	}
	cout << "Contagem regressiva:" << endl;
	while (num > 0) {
		cout << num << endl;
		num--;
	}
	return 0;
};

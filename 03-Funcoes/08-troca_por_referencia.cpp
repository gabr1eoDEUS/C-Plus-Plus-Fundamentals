#include <iostream>
using namespace std;
void trocaValores(int& a, int& b);
int main() {
	int v1 = 10, v2 = 20;
	cout << "Antes da troca: v1 = " << v1 << ", v2 = " << v2 << endl;
	trocaValores(v1, v2);
	cout << "Depois da troca: v1 = " << v1 << ", v2 = " << v2 << endl;
    return 0;
}
void trocaValores(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

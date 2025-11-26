#include <iostream>
using namespace std;
long long factorial(int n);
int main() {
    int num_fatorial = 0;
    cout << "Digite um numero para calcular o fatorial: ";
    cin >> num_fatorial;

    long long resultado = factorial(num_fatorial);
    cout << "O fatorial de " << num_fatorial << " e: " << resultado << endl;

    return 0;
}

long long factorial(int n) {
    if (n < 0) {
        return 0;
    }
    if (n == 0) {
        return 1;
    }
    long long produto = 1;
    for (int i = n; i >= 2; i--) {
        produto = produto * i; 
    }

    return produto;
}

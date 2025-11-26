#include <iostream>
#include <string>
using namespace std;
float* alocarNotas(int tamanho);
int main() {
    float* notas = nullptr;
    int tamanho = 0;
    cout << "Digite o tamanho da turma: ";
    cin >> tamanho;
    notas = alocarNotas(tamanho);
    return 0;
}
float* alocarNotas(int tamanho) {
    return new float[tamanho];
}

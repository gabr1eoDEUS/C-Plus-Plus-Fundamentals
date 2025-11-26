#include <iostream>
#include <string>
using namespace std;
float* alocarNotas(int tamanho);
void lerNotas(float* notas, const int tamanho);
int main() {
    float* notas = nullptr;
    int tamanho = 0;
    cout << "Digite o tamanho da turma: ";
    cin >> tamanho;
    notas = alocarNotas(tamanho);
    lerNotas(notas, tamanho);
    return 0;
}
float* alocarNotas(int tamanho) {
    return new float[tamanho];
}
void lerNotas(float* notas, const int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        cout << "Digite a nota na posicao [ " << (i + 1) << " ]: ";
        cin >> notas[i];
    }
}

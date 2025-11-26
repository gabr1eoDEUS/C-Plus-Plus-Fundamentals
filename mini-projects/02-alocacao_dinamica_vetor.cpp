#include <iostream>
#include <string>
using namespace std;
float* alocarNotas(int tamanho);
void lerNotas(float* notas, const int tamanho);
float calcularMedia(const float* notas, const int tamanho);
void liberarMemoria(float* &notas);
int main() {
    float* notas = nullptr;
    int tamanho = 0;
    cout << "Digite o tamanho da turma: ";
    cin >> tamanho;
    notas = alocarNotas(tamanho);
    lerNotas(notas, tamanho);
    float media = calcularMedia(notas, tamanho);
    cout << "A media das notas e: " << media << endl;
    liberarMemoria(notas);
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
float calcularMedia(const float* notas, const int tamanho) {
    double soma = 0.0;
    for (int i = 0; i < tamanho; i++) {
        soma += notas[i];
    }
    return soma / tamanho;
}
void liberarMemoria(float* &notas) {
    delete[] notas;
    notas = nullptr;
}

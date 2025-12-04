#include <iostream>
#include <string> 
using namespace std;
int main() {
    string names[] = {"Gabriel", "Bruno", "Carla", "Daniel", "Eva"};

    // [Código da A84: Iteração Tradicional - Omitido para foco]

    // 1. ITERAÇÃO POR CÓPIA (Valor)
    cout << "\nUsing for each loop #1 (Cópia):\n";
    for(string nome: names) {
        nome.append("!"); // Altera a cópia local (ineficiente para tipos complexos).
        cout << nome << " ";
    }
    cout << "\nOriginal (não alterado): " << names[0] << "\n"; // Gabriel

    // 2. ITERAÇÃO POR REFERÊNCIA MODIFICÁVEL (Modificação no original)
    cout << "\nUsing for each loop #2 (Referência Modificável):\n";
    // O uso de '&' permite a alteração direta dos elementos do array.
    for(auto &nome: names) { 
        nome.append("!"); // Altera o elemento original na memória contígua.
        cout << nome << " ";
    }
    cout << "\nOriginal (alterado): " << names[0] << "\n"; // Gabriel!

    // 3. ITERAÇÃO POR REFERÊNCIA CONSTANTE (Leitura Eficiente)
    cout << "\nUsing for each loop #3 (Referência Constante):\n";
    // O uso de 'const &' evita a cópia (eficiência) e proíbe a modificação (segurança).
    for(auto const &nome: names) { 
        // nome.append("!"); // Isto causaria um erro de compilação!
        cout << nome << " ";
    }
    
    return 0;
}

#include <iostream>
#include <string> 
#include <vector>
using namespace std;

// 1. FUNÇÃO DE ORDEM SUPERIOR (MAP): Aceita um vetor e um ponteiro para função como argumento.
// int (*func)(int) é o PONTEIRO PARA FUNÇÃO: ele aponta para qualquer função que 
// receba um 'int' e retorne um 'int'.
vector<int> map(vector<int> v, int (*func)(int)){
    vector<int> result;
    for(auto item:v){
        result.push_back(func(item)); // Aplica a função (quadrado ou triplo) a cada item
    }
    return result;
}

int main() {
    // 2. LAMBDA EXPRESSIONS (Funções Anônimas): São usadas aqui porque decaem 
    // (podem ser tratadas) como PONTEIROS DE FUNÇÃO, encaixando na função 'map'.
    auto square =[](int x){return x * x;}; 
    auto triple =[](int x){return x * 3;};
    
    vector<int> nums = {2, 5, 8, 23, 56};
    vector<int> squares, triples;
    
    // O padrão Map em ação: Aplica a função 'square' a todos os elementos de 'nums'.
    squares = map(nums, square); 
    triples = map(nums, triple);
    
    // Impressão de resultados
    for(auto num:nums){
        cout<<num<<"\t";
    }
    cout << "\n"; // Quebra de linha
    for(auto sq:squares){
        cout<<sq<<"\t";
    }
    cout << "\n";
    for(auto tr:triples){
        cout<<tr<<"\t";
    }
    return 0;
}

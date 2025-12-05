#include <iostream>
#include <sstream> // Necessário para usar stringstream
using namespace std;

class Date{
public:
    int day;
    int month;
    int year;

    // 1. MÉTODO: Função que pertence à Classe/Objeto.
    // O método opera sobre os atributos (dados) da instância.
    string toString(){
        stringstream ss; // Cria um stream para construir a string
        
        // Insere os dados no stream (Conversão int -> string)
        ss << day << "/" << month << "/" << year; 
        
        return ss.str(); // Retorna a string final formatada
    }
};

int main() {
    Date d1;
    d1.day = 14;
    d1.month = 1;
    d1.year = 2002;
    Date d2;
    d2.day = 25;
    d2.month = 12;
    d2.year = 2023;

    // 2. CHAMADA DE MÉTODO: Chamado usando o operador ponto (objeto.metodo()).
    cout << "Data 1: " << d1.toString() << endl; // d1 chama toString()
    cout << "Data 2: " << d2.toString() << endl; // d2 chama toString()

    return 0;
}

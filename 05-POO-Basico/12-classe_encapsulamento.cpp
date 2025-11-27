#include <iostream>
#include <string>
using namespace std;
class ContaBancaria {
private:
    int numeroConta = 0;
    float saldo = 0.0;
public:
    float getSaldo() {
        return saldo;
    }
    void depositar(float valor) {
        saldo += valor;
    }
    void sacar(float valor) {
        if (saldo >= valor) {
            saldo -= valor;
            cout << "Saldo sacado com sucesso\n";
        }
        else {
            cout << "Sem saldo na conta ou excede o limite na conta.\n";
            cout << "tente novamente, por favor.\n";
        }
    }
};
int main() {
    ContaBancaria conta;
    // conta.saldo = 100;  Não é possível atribuir o saldo diretamente em 'saldo', pois ele está private (protegido)
    conta.depositar(500);
    conta.sacar(600);
    conta.sacar(200);
    cout << "Saldo R$" << conta.getSaldo() << endl;
    return 0;
}

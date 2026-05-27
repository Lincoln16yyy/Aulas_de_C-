// 07. Descobrir ano de nascimento

#include <iostream>
using namespace std;

int main() {
    int anoAtual, idade, nascimento;

    cout << "Digite o ano atual: ";
    cin >> anoAtual;

    cout << "Digite sua idade: ";
    cin >> idade;

    nascimento = anoAtual - idade;

    cout << "Ano de nascimento: " << nascimento << endl;

    return 0;
}
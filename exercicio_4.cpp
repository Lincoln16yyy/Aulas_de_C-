// 04. Converter horas e minutos para minutos e segundos

#include <iostream>
using namespace std;

int main() {
    int horas, minutos;
    int totalMinutos, totalSegundos;

    cout << "Digite as horas: ";
    cin >> horas;

    cout << "Digite os minutos: ";
    cin >> minutos;

    totalMinutos = (horas * 60) + minutos;
    totalSegundos = totalMinutos * 60;

    cout << "Total em minutos: " << totalMinutos << endl;
    cout << "Total em segundos: " << totalSegundos << endl;

    return 0;
}
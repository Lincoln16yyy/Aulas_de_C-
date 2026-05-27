// 06. Fahrenheit para Celsius

#include <iostream>
using namespace std;

int main() {
    float fahrenheit, celsius;

    cout << "Digite a temperatura em Fahrenheit: ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5/9;

    cout << "Temperatura em Celsius: " << celsius << endl;

    return 0;
}
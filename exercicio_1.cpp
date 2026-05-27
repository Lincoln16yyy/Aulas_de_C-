// 01. Perímetro e área do círculo

#include <iostream>
using namespace std;

int main() {
    float raio, area, perimetro;
    
    cout << "Digite o raio: ";
    cin >> raio;

    area = 3.14 * raio * raio;
    perimetro = 2 * 3.14 * raio;

    cout << "Area: " << area << endl;
    cout << "Perimetro: " << perimetro << endl;

    return 0;
}
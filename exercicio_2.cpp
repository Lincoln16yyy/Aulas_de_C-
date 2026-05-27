// 02. Volume da esfera

#include <iostream>
using namespace std;

int main() {
    float raio, volume;

    cout << "Digite o raio da esfera: ";
    cin >> raio;

    volume = (4.0/3.0) * 3.14 * raio * raio * raio;

    cout << "Volume da esfera: " << volume << endl;

    return 0;
}
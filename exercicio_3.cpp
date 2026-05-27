// 03. Converter anos em dias

#include <iostream>
using namespace std;

int main() {
    int anos, dias;

    cout << "Digite a quantidade de anos: ";
    cin >> anos;

    dias = anos * 365;

    cout << "Quantidade de dias: " << dias << endl;

    return 0;
}
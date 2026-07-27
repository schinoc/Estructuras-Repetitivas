#include <iostream>
using namespace std;

int main() {

    int base, exponente;
    long resultado = 1;

    cout << "Ingrese la base: ";
    cin >> base;

    cout << "Ingrese el exponente: ";
    cin >> exponente;

    if (exponente < 0) {
        cout << "Exponente no valido";
    }
    else {
        for (int i = 1; i <= exponente; i++) {
            resultado *= base;
        }

        cout << base << "^" << exponente << " = " << resultado << endl;
    }

    return 0;
}

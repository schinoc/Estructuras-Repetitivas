#include <iostream>
using namespace std;

int main() {

    int altura;
    char simbolo;

    cout << "Ingrese la altura del triangulo: ";
    cin >> altura;

    cout << "Ingrese el simbolo que desea usar: ";
    cin >> simbolo;

    if (altura <= 0) {
        cout << "La altura debe ser mayor que 0." << endl;
    }
    else {

        cout << "\nTriangulo generado:\n\n";

        for (int i = 1; i <= altura; i++) {

            for (int j = altura; j > i; j--) {
                cout << " ";
            }

            for (int j = 1; j <= i; j++) {
                cout << simbolo << " ";
            }

            cout << endl;
        }

    }

    return 0;
}

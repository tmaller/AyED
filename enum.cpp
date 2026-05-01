#include <iostream>
using namespace std;

enum Dias { LUNES = 1, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO };

int main() {
    int n;
    cout << "Ingrese un numero (1-7): ";
    cin >> n;

    if (n < 1 || n > 7) {
        cout << "Error de ingreso de datos" << endl;
    } else {
        switch (n) {
            case LUNES: cout << "Lunes"; break;
            case MARTES: cout << "Martes"; break;
            case MIERCOLES: cout << "Miercoles"; break;
            case JUEVES: cout << "Jueves"; break;
            case VIERNES: cout << "Viernes"; break;
            case SABADO: cout << "Sabado"; break;
            case DOMINGO: cout << "Domingo"; break;
        }
        cout << endl;
    }
    return 0;
}
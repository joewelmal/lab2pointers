#include <iostream>
using namespace std;

int main() {
    int vals[] = {4, 7, 11, 18, 25};

    cout << "Nombre del array (direccion): " << vals << endl;
    cout << "Primer elemento (*vals): " << *vals << endl;

    int *valptr = vals;   // valptr apunta al primer elemento

    cout << "\n--- Recorriendo con [] ---" << endl;
    for (int i = 0; i < 5; i++) {
        cout << valptr[i] << " ";
    }
    cout << endl;

    cout << "\n--- Recorriendo con aritmetica de punteros ---" << endl;
    for (int i = 0; i < 5; i++) {
        cout << *(valptr + i) << " ";
    }
    cout << endl;

    cout << "\n--- Usando ++ para avanzar el pointer ---" << endl;
    int *p = vals;
    for (int i = 0; i < 5; i++) {
        cout << *p << " ";
        p++;
    }
    cout << endl;

    // EJERCICIO 1
    cout << "\nUltimo elemento: " << *(vals + 4) << endl;

    // EJERCICIO 2
    int *inicio = vals;
    int *fin = vals + 4;

    cout << "Distancia entre inicio y fin: " << fin - inicio << endl;

    return 0;
}
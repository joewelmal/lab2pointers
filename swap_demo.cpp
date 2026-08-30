#include <iostream>
using namespace std;

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void duplicar(int *valor) {
    *valor = *valor * 2;
}

void ordenarPar(int *a, int *b) {
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int num1 = 2, num2 = -3;

    cout << "Antes: num1 = " << num1 << " num2 = " << num2 << endl;
    swap(&num1, &num2);
    cout << "Despues: num1 = " << num1 << " num2 = " << num2 << endl;

    int numero = 5;

    cout << "Antes de duplicar: " << numero << endl;
    duplicar(&numero);
    cout << "Despues de duplicar: " << numero << endl;

    // EJERCICIO 2
    int a = 3, b = 8;
    cout << "Antes de ordenar: " << a << " " << b << endl;
    ordenarPar(&a, &b);
    cout << "Despues de ordenar: " << a << " " << b << endl;

    int c = 10, d = 4;
    cout << "Antes de ordenar: " << c << " " << d << endl;
    ordenarPar(&c, &d);
    cout << "Despues de ordenar: " << c << " " << d << endl;

    return 0;
}
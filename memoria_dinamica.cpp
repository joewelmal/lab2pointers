#include <iostream>
using namespace std;

int main() {
    // Un solo valor dinámico
    int *num = new int;
    *num = 42;
    cout << "Valor dinamico: " << *num << endl;
    delete num;
    num = nullptr;

    // Dos arrays dinamicos de double
int tamano;

cout << "\nCuantas notas quieres guardar? ";
cin >> tamano;

double *examen1 = new double[tamano];
double *examen2 = new double[tamano];

for (int i = 0; i < tamano; i++) {
    examen1[i] = 80.0 + i;
    examen2[i] = 90.0 + i;
}

cout << "Notas examen 1: ";
for (int i = 0; i < tamano; i++) {
    cout << examen1[i] << " ";
}
cout << endl;

cout << "Notas examen 2: ";
for (int i = 0; i < tamano; i++) {
    cout << examen2[i] << " ";
}
cout << endl;

delete [] examen1;
delete [] examen2;

examen1 = nullptr;
examen2 = nullptr;


    return 0;
}
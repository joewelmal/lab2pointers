#include <iostream>
using namespace std;

int main() {
    int num = 25;

    // Dirección de memoria
    cout << "Direccion de num: " << &num << endl;

    // Declarar y asignar un pointer
    int *ptr = nullptr;
    ptr = &num;

    cout << "ptr apunta a: " << ptr << endl;
    cout << "Valor apuntado (*ptr): " << *ptr << endl;

    // Modificar el valor original a traves del pointer
    *ptr = 100;
    cout << "num despues de *ptr = 100: " << num << endl;


    // EJERCICIO 1
    double precio = 19.99;

    double *pptr = &precio;

    cout << "Direccion de precio: " << pptr << endl;
    cout << "Valor de precio: " << *pptr << endl;

    // EJERCICIO 2
    // int *malPtr = &precio;

    // EJERCICIO 3
    int *sinInicializar = nullptr;
    // cout << *sinInicializar << endl;



    return 0;
}
#include <iostream>
#include <memory>
using namespace std;

unique_ptr<int> triplicar(int valor) {
    unique_ptr<int> resultado(new int);
    *resultado = valor * 3;
    return resultado;
}

int main() {
    unique_ptr<int> ptr = triplicar(5);

    cout << "Resultado: " << *ptr << endl;

    return 0;
}
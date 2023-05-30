#include <iostream>

int main() {
    const int filas = 5;
    const int columnas = 10;

    int array[filas][columnas];

    // Asignar valores al array
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            array[i][j] = i + j;
        }
    }

    // Imprimir los valores del array
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}


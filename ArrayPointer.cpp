#include <iostream>

int main() 
{

    int size;

    std::cout << "Cuantos numeros desea guardar ?" << std::endl;
    std::cin >> size;

    int* arrayHeap = new int[size];

    for(int i = 0; i != size; i++) {
        std::cout << "ingrese el numero en la posicion " << i << std::endl;

        std::cin >> *(arrayHeap + i);
    }

    std::cout << "Los numeros que escribio son:" << std::endl << std::endl;

    for(int i = 0; i != size; i++) {
        std::cout << *(arrayHeap + i) << std::endl;
    }

    delete[] arrayHeap;

    return 0;
}

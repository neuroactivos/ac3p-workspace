#include <iostream> // para incluir las librerías de entrada y salida

int main() { // función principal, punto de entrada al programa

    int A, B; // declaramos dos variables enteras
    
    std::cin >> A >> B; // leemos dos enteros desde la entrada estándar

    int sum = A + B; // declaramos una variable entera y le asignamos la suma de A y B

    std::cout << sum << "\n"; // escribimos la suma en la salida estándar, seguido de un salto de línea

    return 0; // terminamos el programa con un código de salida 0, para indicar que terminó correctamente

} // fin de la función principal


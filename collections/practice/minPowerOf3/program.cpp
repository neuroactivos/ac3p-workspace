// ATENCIÓN: Este programa no está completo (no resuelve el reto), toca a usted arreglaro o terminarlo.

#include <iostream> // incluye la biblioteca iostream, que contiene las funciones para entrada y salida de datos

int main() { // define la función principal del programa, su punto de entrada

    int N; // declara una variable N entera, para almacenar el número de entrada
    std::cin >> N; // lee el número desde la entrada estándar

    int exponent = 0; // variable para almacenar la mayor potencia de 3 que vayamos encontrando
    int result = 1; // inicializar la variable result con 3^0 = 1

    // mientras la próxima potencia de 3 sea menor estricto que N, actualizar result e intentar con el siguiente exponent
    while ((result * result * result) < N) { // mientras la siguiente potencia de 3 sea menor estricto que N

        result *= 3; // actualiza result a la siguiente potencia de 3

        exponent++; // incrementa el exponente en 1

    } // fin del bucle while

    std::cout << exponent << std::endl; // imprime la mayor potencia de 3 que es menor estricto que N, seguido de un salto de línea

    return 0; // finaliza el programa indicando que terminó correctamente con un código de terminación 0

} // fin de la función principal


// ATENCIÓN: Este programa no está completo, es un fragmento de código que debe ser completado o arreglado para que funcione correctamente.

#include <iostream> // para acceder a las funciones de entrada y salida

int main() { // función principal, punto de entrada del programa

    int N, val, sum = 0; // declarando las variables enteras N, val y sum, inicializando sum en 0

    std::cin >> N; // leyendo el valor de N, con la cantidad de enteros a leer de la lista

    for(int i = 1; i < N-1; ++i) { // ciclo for que se ejecutará N veces

        std::cin >> val; // leer de la entrada estándar el valor de val (en cada iteración del ciclo for)

        if(val % 2 != 0) { // si el residuo de val entre 2 es diferente de 0 entonces es que val es impar

            sum += val; // adicionar a sum el valor de val

        } // fin de la condición

    } // fin del ciclo for

    std::cout << sum << std::endl; // enviando a la salida estándar el valor de sum, seguido de un salto de línea

    return 0; // indicando que el programa terminó correctamente, devolviendo 0
}

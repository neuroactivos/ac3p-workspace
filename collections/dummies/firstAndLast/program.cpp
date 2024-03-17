// ATENCIÓN: Este programa no está completo. Corresponde a usted completarlo para resolver el desafío.

#include <iostream> // para leer y escribir de la entrada y salida estándar respectivamente, usando cin, cout y cerr

using namespace std; // para no tener que escribir std:: antes de cada función de la biblioteca estándar

int main() { // la función que sirve de punto de entrada a la aplicación en C++

    int N, first, last; // declarar tres variables de tipo entero

    cin >> N; // leer el número de enteros en la lista y guardarlo en la variable N

    cin >> first; // leemos el único entero de la lista (que siempre es de uno o más elementos)
    
    if (N == 1) { // si la lista tiene un solo elemento

        last = first; // el único elemento es el último tambien

    } else { // si la lista tiene más de un elemento

        for (int i = 0; i < N; i++) { // Repetir N-1 veces, usando i como contador
            cin >> last; // leemos un entero de la entrada estándar y lo guardamos en la variable val            
        }
    }

    std::cout << first << " " << last << endl; // enviar a la salida el primer y último elemento de la lista, separados por un espacio y seguidos de un salto de línea

    return 0;
}

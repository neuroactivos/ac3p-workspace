#include <iostream> // para poder leer y escribir de la entrada y salida estandar usando cin, cout y cerr
#include <climits> // para poder usar la constante INT_MIN que guarda el valor mínimo que puede tener un entero

using namespace std; // para no tener que escribir std:: delante de cout, cerr y cin

int main() { // definición de la función main, que es el punto de entrada de cualquier programa en C++

    int N, val; // declaracion de N y val como variables de tipo entero

    cin >> N; // leer de la entrada estandar el valor de N

    int maxVal = INT_MIN; // declaramos una variable maxVal de tipo entero y le asignamos el valor minimo que puede tener un entero

    for (int i = 0; i < N; ++i) { // repetimos el bloque de instrucciones N veces, usando i como contador

        cin >> val; // leemos de la entrada estandar el valor de val, en cada repetición del bucle

        if (val > maxVal) { // si el valor de val es mayor que el valor de maxVal, entonces
            maxVal = val; // asignamos el valor de val a maxVal para guardar el valor más grande encontrado hasta el momento
        } // aquí termina el bloque de instrucciones que se ejecuta si la condición del if es verdadera

    } // aquí termina el bloque de instrucciones que se repite N veces

    cout << maxVal << endl; // enviamos a la salida estandar el valor de maxVal seguido de un salto de línea

    return 0; // indicamos que el programa terminó correctamente, con código de retorno 0

} // aquí termina el bloque de instrucciones que se ejecuta al llamar a la función main

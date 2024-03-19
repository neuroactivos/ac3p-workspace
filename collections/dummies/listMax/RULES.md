
# REGLAS GENERALES Y CONVENCIONES #

## Codificando tu solución ##

Todo el código de solución al desafío debe estar contenido dentro de un único archivo de programa llamado `program.cpp`.

Ese programa debe tener un método principal (punto de entrada) y terminar devolviendo al sistema un código de salida `0`.

Tu programa no debe interactuar con el sistema de archivos, ni crear procesos, ni iniciar conexiones de red, ni manejar explícitamente hilos (incluyendo el uso de bibliotecas de hilos). 

El enfoque de tu programa debe estar en resolver el problema algorítmico utilizando el hilo principal de ejecución.

Solamente se permiten las bibliotecas estándar de C++. Se prohíbe el uso de bibliotecas o marcos de trabajo externos no incluidos en la biblioteca estándar.

Sólo pueden usarse las bibliotecas estándares que se indiquen. En caso de que no se indique, sólo debe aparecer una inclusión: `#include <iostream>`

## Entrada y salida de datos ##

Tu programa debe leer los datos de entradas desde la entrada estándar y escribir los datos de salida en la salida estándar.

Sigue meticulosamente el formato de entrada y salida especificado en la descripción de cada desafío. No agregues texto o datos extra a la salida, como mensajes de depuración, líneas o espacios en blanco, etc.

Todas las líneas de entrada terminan con un separador de línea (`\n`), y no se presentan líneas extra.

Todas las líneas que tu programa emite hacia la salida deben terminar con un separador de línea (`\n`). No emitas líneas extra.

## Depuración ##

La salida de error estándar (`std::cerr`) no se evalúa y puede ser utilizada temporalmente para propósitos de depuración durante el desarrollo de tu solución.

Estos mensajes deben ser eliminados antes de hacer tu envío final del programa con la solución al desafío.

## Rendimiento y optimización ##

Presta mucha atención a las especificaciones del desafío respecto al tiempo de ejecución, uso de memoria y restricciones de tamaño de entrada/salida. Tu solución debe ser optimizada para manejar entradas grandes de manera eficiente dentro de estos límites.

La eficiencia del código importa. Las soluciones ineficientes que excedan los límites de tiempo o memoria serán descalificadas.

Gestiona la memoria sabiamente. Evita el consumo innecesario de memoria y asegura que tu programa no cause fugas de memoria.

Hay límites que pueden imponerse sobre tu programa cuando se ejecuta contra casos de prueba, no sólo se mide el tiempo que este demora. Estos límites se indican en cada desafío. En caso de no indicarse, asume que los límites estarán ajustados a una solución buena u óptima al problema.

## Tiempo de ejecución ##

Tu programa debe completar la ejecución dentro del tiempo especificado en cada desafío, o en caso que no se indique, en menos de 1 segundo.

Las soluciones que excedan este límite de tiempo se considerarán incorrectas.

## Evaluación del programa ##

El programa se evalúa con varios casos de prueba (datos de entrada). Un caso por vez. Para cada caso se obtiene una evaluación, comparando la salida del programa con la salida esperada para el caso de prueba en cuestión. Si el programa no termina correctamente, excede un límite de memoria, o tiempo u otro de los límites impuestos, o si produce error durante la ejecución, o si no termina devolviendo en código de retorno 0, o la salida no está presente, entoces se considera que no resolvió el desafío. La única excepción es cuanodo se produce un error interno en el sistema de evaluación, en cuyo caso debe contactar a los organizadores. 

Generalmente se ofrece uno o mas ejemplos como caso de pruebas que puedes comprobar localmente cuando trabajas en el desafío. Puedes crear nuevos casos locales para ver si tu programa se comporta según esperas. Cuando el programa es evaluado por los jueces, se utiliza un conjunto de datos de prueba diferente, que es usualmente extenso y cubre casos extremos.

## Envío del programa a los jueces ##

Cuando practicas localmente no es necesario hacer ningún envío. Cuando se realice un encuentro competitivo se darán instrucciones.

## Acrónimos usados cuando se evalúa el programa con uno de los casos de prueba ##

Cada caso de prueba se clasifica de acuerdo con el comportamiento de tu programa al ser alimentado con los datos de entrada.

- __OM__ - Coincidencia de Salida. La salida coincidió con la salida de referencia.
- __OD__ - Salida Diferente. La salida no coincidió con la salida de referencia.
- __OF__ - Salida Encontrada. Se encontró la salida de tu programa, pero no hay salida de referencia presente para comparar.
- __OEE__ - Error de Salida Vacía. La salida de tu programa estaba vacía.
- __NZE__ - Salida No Cero. El programa terminó con un código de salida no cero.
- __TLE__ - Límite de Tiempo Excedido. El límite de tiempo de ejecución del programa fue excedido.
- __MLE__ - Límite de Memoria Excedido. El límite de memoria del programa fue excedido.
- __OLE__ - Límite de Salida Excedido. El límite del tamaño de la salida del programa fue excedido.
- __GRE__ - Error de Ejecución Genérico. El programa produjo un error durante la ejecución.
- __ISE__ - Error de Sistema Interno. Se produjo un error no relacionado con tu programa al evaluar el programa: contacta a los organizadores.

Puedes ver estos códigos al probar los casos de prueba locales, pero no cuando el programa es juzgado con los casos que tiene el juez en línea.

### Acrónimos usados cuando el programa es juzgado para ver si resuelve o no el desafío ###

Un desafío se evalúa en función de cómo se desempeñó el programa contra cada uno de los casos utilizados para el juicio. Los siguientes códigos se asignan como resultado de juzgar la solución de tu programa para el desafío:

- __CA__ - Respuesta Correcta. Después de probar contra todos los casos, todas las salidas coincidieron. Este es el objetivo a alcanzar.
- __WA__ - Respuesta Incorrecta. Al menos una salida no coincidió, no estaba presente, o se produjo un código de salida no cero.
- __LE__ - Límite Excedido. Al menos uno de los casos hizo que la ejecución de tu programa excediera el tiempo permitido, o excedió algunos de los otros límites.
- __RE__ - Error de Ejecución. Al menos uno de los casos produjo un error durante la ejecución de tu programa.
- __SE__ - Error de Sistema. Se produjo al menos un error de sistema interno. Contacta a los organizadores.

Estos códigos son los que se te informan a ti o a tu equipo cuando la solución de tu programa es evaluada utilizando todos los casos internos del juez para el desafío.

Un desafío se considera resuelto si es evaluado como __CA__, y no resuelto en cualquier otro caso.

---


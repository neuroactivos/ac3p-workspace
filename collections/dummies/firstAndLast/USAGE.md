
# GUÍA PARA USAR LA HERRAMIENTA DE COMPILACIÓN Y PRUEBA DEL PROGRAMA #

Lee primero el archivo `README.md` y completa la preparación del ambiente de trabajo.

Hay dos formas principales de trabajar en un desafío. Una es desde dentro de `VS Code` y otra desde la línea de comandos.

## Uso de acpp desde VS Code ##

En esta sección se explica el uso básico de `acpp` desde dentro de `VS Code`. Se asume que ya tienes instalado tanto `VS Code` como la extensión `acpp`, según se explica en `README.md`.

Cuando abres la carpeta de trabajo de un desafío en `VS Code` las funcionalidades para `acpp` quedarán activadas automáticamente. Al editar `program.cpp` la vista asociada con el ícono de extensiones que hay en la columna izquierda se activará. Puedes presionar sobre el icono de la extensión `ACPP` en cualquier momento, pero sólo desde la carpeta de un desafío se podrá usar.

Cuando abras carpetas de desafíos con `VS Code`notarás que en esa área que se abre cuando presionas el ícono de `ACPP`, aparecerán los casos de prueba que hay en `inputs/`. Podrás dar doble click para ejecutarlos o abrir un menú contextual con el botón derecho del mouse.

Si ejecutas un caso únicamente, verás que este se señliza primero con un reloj y poco  después con una indicación del resultado y el tiempo que tomó ejecutarlo. Si haces lo mismo a nivel del desafío, entonces todos los casos son ejecutados, y la señalización y resultados se mostrarán para todos los casos disponibles.

Si agregas casos a mano desde la vista del `Explorer` y estos no aparecen automáticamente en la vista de `ACPP`, entonces presiona el icono pequeño de recargar que aparece arriba y a la derecha en el listado de casos, eso hará que se recarguen y deberías ver el nuevo caso agregado.

Si intentas ejecutar un caso cuando el programa tiene errores sintácticos entonces no se ejecuta los casos, sino que se muestran los errores en un panel de salida que se visualizará automáticamente.

## Uso de acpp desde la línea de comandos ##

Esta sección cubre el uso básico de la aplicación `acpp` desde la línea de comandos.

La aplicación `acpp` está diseñada para construir y probar un archivo de programa, que es una solución a un desafío.

Los desafíos están organizados en colecciones, desde una carpeta raíz del árbol de colecciones. Por ejemplo:

```
collections/dummies/listMax/
```

En el caso anterior, la carpeta `collections` es la carpeta raíz del árbol de colecciones. Esta carpeta podría contener varias colecciones, cada una en su propia carpeta. 

En el ejemplo, se está mostrando el camino hasta la carpeta de un desafío, `listMax`, que está dentro de la colección `dummies`.

Cada directorio de colección puede contener varios desafíos, cada uno en su propia carpeta.

El directorio del desafío es donde normalmente deberías trabajar al resolver un desafío. Debes moverte haca esa carpeta o abrir esa carpeta como raíz del proyecto si estás en `VS Code`.

Inicialmente, una carpeta que corresponde a un desafío contiene los siguientes archivos:

```
CHALLENGE.md
RULES.md
USAGE.md
program.cpp
input/example1.in
output/example1.out.ref
```

Después de la primera ejecución, puedes ver algunos archivos adicionales:

```
output/example1.out
output/example1.out.timing
```

- `CHALLENGE.md` contiene un texto describiendo el desafío algorítmico que debes resolver, junto con cualquier restricción, ejemplos descritos y reglas específicas a seguir.

- `RULES.md` contiene reglas e instrucciones generales que debe seguir el código del programa, su comportamiento durante la ejecución, cómo se evalúa este.

- `USAGE.md` contiene algunas instrucciones de como compilar y ejecutar tu programa, como comprobarlo con un caso de prueba o todos, etc

- `program.cpp` contiene tu código fuente, tu solución al desafío. Debes editar este archivo para escribir el código que resuelva el desafío, luego construirlo y probarlo contra algunos casos conocidos de ejemplo, o propios que crees.

- `inputs/` contiene los casos de prueba. Cada archivo representa un caso para probar (una entrada a tu programa). Puede haber un par de archivos allí como ejemplos de entradas. Observa que todos ellos terminan con el sufijo `.in`. Puedes agregar tus propios casos en esta carpeta. Cuando tu programa sea evaluado por el juez, será probado contra varios casos, a los cuales no tienes acceso.

- `outputs/` contiene la salida de tu programa para cada caso probado. Para cada uno de los casos de entrada en `inputs/` eventualmente aparecerán algunos archivos relacionados en `outputs/`. Más específicamente, para un caso de entrada llamado `example1.in` puedes ver:

- `output/example1.out` que contiene la última salida de tu programa cuando el archivo `example1.in` correspondiente se utilizó durante una prueba.

- `output/example1.out.ref` que contiene la salida correcta (referencia de salida) que el programa debe producir para considerarse correcto para la entrada `example1.in` correspondiente.

- `output/example1.out.timing` que contiene el tiempo que tomó la ejecución de tu programa, medido por última vez cuando el archivo `example1.in` correspondiente se utilizó durante una prueba.

Cuando se produce la evaluación de tu programa, varios casos de entrada se prueban, uno a uno, y la salida del programa se compara entonces con las referencias de salida correspondientes para ver si hay una coincidencia exacta o no.


### CONSTRUIR Y EJECUTAR TU PROGRAMA ###

Asumiendo que la herramienta `acpp` ya está instalada, el uso es tan simple como llamar:

 ```
 acpp program.cpp
 ```

Puedes omitir el argumento `program.cpp` si ya estás en la carpeta donde se encuentra ese archivo, o puedes proporcionar una ruta completa o relativa a esa carpeta o al propio programa.

Por ejemplo:

```
cd collections/testCollection/testChallenge/
acpp
```

La herramienta construirá el programa si es necesario y lo probará contra todos tus casos de entrada locales.

Para construir solo, sin probar:

```
acpp -build
```

Para probar solo algunos de los casos:

```
acpp -matcher example program.cpp
```

eso solo usará los casos de prueba que contengan 'example' como parte del nombre del caso.

Si estás practicando y tu copia de trabajo tiene las soluciones al desafío (los casos de prueba que usaría el juez en línea), entonces también puedes usar la herramienta para juzgar tu programa como lo haría el juez en línea:

```
acpp -judge program.cpp
```

Durante los concursos necesitarás enviar el programa como una solución a un desafío y proporcionar credenciales. Ese proceso se cubre en un documento diferente aún está en preparación esa parte de la plataforma.

### FLUJO DE TRABAJO PARA RESOLVER ###

Después de que la herramienta `acpp` esté instalada y tu copia de trabajo esté lista, el flujo de trabajo es simple:

1. Lee `CHALLENGE.md` para entender el problema y las restricciones.
1. Estudia los ejemplos, si se proporcionan.
1. Crea nuevos casos de entrada y salidas esperadas de referencia para ellos cuando sea necesario.
1. Codifica tu solución dentro de `program.cpp` y solo ahi.
1. Usa la entrada estándar para leer los datos del caso de entrada y la salida estándar para escribir los datos de la solución.
1. Asegúrate de que tu programa termine a tiempo, con el código de salida 0, consuma la mínima memoria posible y siga las reglas generales para el concurso y las reglas específicas para el desafío.
1. Asegúrate de que la salida de tu programa esté limpia de mensajes de depuración.
1. Asegúrate de que tu programa esté construido y produzca los resultados esperados para los ejemplos y tus propios casos. Debes usar la herramienta `acpp` para garantizarlo.
1. Envía tu programa cuando estés listo si se trata de una competición o existe un méoido de evaluar remotamente tu programa por un "juez en línea".

---

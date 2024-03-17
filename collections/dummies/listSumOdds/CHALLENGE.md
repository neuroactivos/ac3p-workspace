
# Sumar todos los números impares de una lista #

## Objetivo ##

Escribe un programa que lea una lista de enteros y muestre la suma de todos los números impares de la lista.

### Formato de entrada ###

La primera línea de entrada contiene un solo entero, `N`, que representa el número de enteros en la lista, donde `1 ≤ N ≤ 10^9`.

Cada una de las siguientes `N` líneas contiene un solo entero, representando cada elemento de la lista.

### Formato de salida ###

El programa debe mostrar un solo entero, que representa la suma de todos los números impares que hay en la lista.

### Restricciones ###

- Los enteros de la lista pueden ser negativos, positivos o cero.
- Para cada entero `x` en la lista se cumple que su valor absoluto es menor o igual que `10^9`
- Para determinar la paridad o no de un número tenga en cuenta su valor absoluto. `-3` se considera impar, al igual que `3`

## Ejemplo 1 ##

### Entrada ###

```
5
1
2
3
4
5
```

### Salida ###

```
9
```

__Explicación__

La suma de los números impares en la lista `[1, 2, 3, 4, 5]` es 9 (`1 + 3 + 5`), que es lo que muestra el programa.

## Ejemplo 2 ##

### Entrada ###

```
4
-3
-2
7
8
```

### Salida ###

```
4
```

__Explicación__

La suma de los números impares en la lista `[-3, -2, 7, 8]` es 4 (`-3 + 7`), que es lo que muestra el programa.

---

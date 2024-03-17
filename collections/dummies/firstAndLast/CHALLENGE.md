
# Primer y último elemento de una lista #

## Objetivo ##

Escribe un programa que lea una lista de enteros y muestre el primer y el último elemento de la lista.

### Formato de entrada ###

La primera línea de entrada contiene un solo entero, `N`.

Cada una de las siguientes `N` líneas contiene un solo entero. Estos enteros conforman la lista que el programa procesará.

### Formato de salida ###

El programa debe mostrar dos enteros, separados por un espacio: el primero y el último elemento de la lista.

### Restricciones ###

- El entero `N` cumple que `1 ≤ N ≤ 10^5`.
- Los enteros de la lista pueden ser negativos, positivos o cero.
- Para cada entero `n` de la lista se cumple que `-10^6 ≤ n ≤ 10^6`.

## Ejemplo 1 ##

### Entrada ###

```
8
6349
99
1222
999910000
98
123
-1824235235
-73
```

### Salida ###

```
6349 -73
```

__Explicación__

El primer entero de la lista es 6349 y el último es -73, que son los que muestra el programa.

## Ejemplo 2 ##

### Entrada ###

```
3
-1
-3
-2
```

### Salida ###

```
-1 -2
```

__Explicación__

El primer entero de la lista es -1 y el último es -2, que son los que muestra el programa.

---

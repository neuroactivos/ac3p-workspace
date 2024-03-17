
# Suma mínima para no negativos #

## Objetivo ##

Escribe un programa que analice una lista de enteros, siendo cada uno un número no negativo, identificando la suma mínima alcanzable al sumar cualesquiera dos números distintos de la lista. Tu programa debe entregar dos números: la suma mínima en sí y el número de pares únicos dentro de la lista que suman este valor mínimo.

### Formato de entrada ### 

La entrada comienza con un entero `N`, indicando el número de enteros en la lista.

Cada una de las siguientes `N` líneas contiene un entero distinto, representando un elemento de la lista. 

### Formato de Salida ###

La primera línea de salida debe ser la suma mínima de cualesquiera dos enteros distintos de la lista de entrada.

La segunda línea debe indicar el número de pares únicos que se pueden formar a partir de la lista que suman este valor mínimo.

## Restricciones ##

- El número `N` cumple que `2 ≤ N ≤ 10^5`
- El valor de cada entero `n` de la lista cumple `0 ≤ n ≤ 10^6`.
- Los enteros en la lista no son necesariamente únicos.
- Los pares se consideran iguales si contienen los mismos números, sin importar el orden de los mismos o sus posiciones en la lista. Es decir `(a, b)` es idéntico a cualquier otro `(a, b)` y, también, `(a, b)` se considera lo mismo que `(b, a)`.


## Ejemplo 1 ## 

### Entrada ###

```
6
111111111119
20
4
7
0
63
```

### Salida ###

```
4
1
```

__Explicación__

La suma mínima que se puede obtener sumando cualesquiera dos números diferentes de la lista es 4, por lo tanto, el número en la primera línea de salida es 4. Esa suma mínima se logra sumando 0 y 4. Solo hay un par único `(0, 4)` que suma hasta 4, por lo tanto, la salida en la segunda línea es 1.

---

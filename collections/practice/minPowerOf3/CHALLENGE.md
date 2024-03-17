
# Mayor potencia de tres menor a un número dado #

## Objetivo ##

Escribe un programa que reciba un número entero `N` y determine la mayor potencia de 3 (`3^x`) que es menor a `N`.

### Formato de entrada ###

El programa recibe un solo entero, `N`.

### Formato de salida ###

El programa debe mostrar un solo entero, `x`, que es el exponente para una base 3, de forma que `3^x` es mayor número que menor estricto que `N`.

### Restricciones ###

- `N` es un entero positivo, donde `3 ≤ N ≤ 10^9`.
- No utilice logaritmos en su solución. 
- Sólo puede incluir `iostream` (ningún otro `#include`)

## Ejemplo 1 ##

### Entrada ###

```
29
```

### Salida ###

```
3
```

__Explicación__

Para `x=3` tenemos que `3^3 = 27`, que es el mayor número potencia de 3 que es menor que 29. Si fuera `x=4` tendríamos `3^4 = 81` que es mayor que 29, por lo tanto `x` es 3 y eso es lo que se envía como solución.

## Ejemplo 2 ##

### Entrada ###

```
50000000
```

### Salida ###

```
16
```

__Explicación__

Para `x=16` tenemos que `3^16 = 43046721`, que es el mayor número potencia de 3 que es menor que 50000000. Si fuera `x=17` tendríamos `3^17 = 129140163` que es mayor que 50000000, por lo tanto `x` es 16 y eso es lo que se envía como solución.

---

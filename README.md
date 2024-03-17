
# INSTRUCCIONES #

Este espacio de trabajo contiene una serie de desafíos de programación organizados en colecciones.

Cada carpeta bajo `collections` es una colección de desafíos. A su vez, cada desafío tiene su propia carpeta que lo contiene completamente.

Por ejemplo, `collections/dummies/minSum/` es la ruta a un desafío llamado `minSum`  que está dentro de una colección llamada `dummies`, que está dentro de la carpeta de colecciones llamada `collections`

Para entender el desafío y codificar una solución, muévete a una de las carpetas de desafío (`minSum` en este ejemplo), y mira su contenido. Cuando ya tengas instalado y configurado `VS Code` abre esa carpeta desde el menú: `File -> Open Folder...`

En la carpeta de un desafío vas a encontrar un archivo llamado `USAGE.md`, otro llamado `RULES.md` y otro llamado `CHALLENGE.md` que debes leer antes de empezar a programar, en ese orden. `USAGE.md` es un resumen de cómo se construye y comprueba el programa que hagas usando los casos de prueba de ejemplo, o los propios que crees cuando estes trabajando en una solución. Por otro lado `RULES.md` tiene algunas reglas y convenios generales que debes tener en cuenta cuando trabajes en los desafíos. Finalmente, `CHALLENGE.md` contiene los detalles del desafío que está en esa carpeta. 

Puede que notes que `USAGE.md` y `RULES.md` son iguales o casi iguales a los que encuentres en otras carpetas que corresponden a otros desafíos. Esto es intencional y es para facilitar que no tengas que salir de esas carpetas, ya que ahí tendrás todo lo necesario cuando vas trabajar en un desafío. 

Aunque puedes usar tu entorno de desarollo preferido, si tienen uno, recuerda que tu programa, que es la solución al desafío, debe construirse y comprobarse con una aplicación específica, llamada "acpp", o en su defecto desde el propio `VS Code` si es que ya lo instalastes y le agregastes la extension "acpp". Las instrucciones para instalar todo esto y preparar tu ambiente de trabajo están incluídas más abajo en este propio documento.

### SOBRE LOS DESAFÍOS ### 

En adición a los archivos con instrucciones y reglas, en la carpeta de un desafío vas a encontrar un archivo `program.cpp` (o quizás con otra extensión cuando esos otros tipos de programa estén soportados). Verás también que hay una carpeta `inputs/` que guarda los casos de prueba para comprobar localmente tu programa y posiblemente una carpeta `outputs/` que guarda las salidas y otros detalles que va entregando tu programa cuando se ejecuta usando uno de los casos de prueba, que están en `inputs/`. 

Un caso de prueba es un juego de datos a los que se tiene que enfrentar tu programa. Cada caso de prueba es un archivo dentro de `inputs/`. Esos archivos que son casos de prueba tienen un nombre como `example1.in` o `pruebaA.in`. Siempre tienen una extensión `.in` y puedes agregar ahí nuevos casos para comprobar tu programa con ellos.

En la carpeta `outputs/` puedes encontrar archivos que corresponden a cada caso en `inputs/`. Por ejemplo para un `inputs/example1.in` encontrarás en algún momento -tras ejecutar tu programa con ese caso- un `outputs/example1.out` (siempre con extensión `.out`) que corresponde a `example1.in`. Es decir tendrá el mismo nombre pero otra extensión. 

También debes conocer que si ves un archivo `outputs/example1.out.ref` u otro terminado en extensión `.out.ref` cada uno de ellos contiene la salida que **debería** entregar tu programa como solución al desafío cuando se le entrega el juego de datos `inputs/example1.in` (u otro correspondiente). En otras palabras, el archivo `example1.out` contiene la última salida que entregó tu programa cuando se ejecutó con los datos en `inputs.in`, y `example1.out.ref` contiene la salida que debería haber entregado. Cuando estas coinciden significa que la solución de tu programa, para ese caso en concreto, fue exitosa. Puedes crear tus propios archivos `.out.ref` a medida que necesites comprobar si tu programa funciona bien para otros datos.

La herramienta de línea de comandos `acpp` y la extensión que instalarás en `VS Code` te ayudarán con todo esto.

Recuerda que cuando hayas terminado con un desafío o vayas a trabajar con otro, debe moverte a la carpeta que lo contiene y trabajar desde allí. Puedes hacer eso desde dentro de 'VS Code', como se mencionó previamente.

Cuando hayas instalado todo el ambiente de trabajo, dentro de la carpeta `acpp-workspace` encontraras una carpeta `collections` que contiene a las carpetas de los desafíos. Explora dentro de `collections` y verás algunas colecciones. Para prácticas mira dentro de la colección `dummies` y luego explora dentro de `practice`.

# INSTALACIÓN Y PREPARACIÓN DEL AMBIENTE DE TRABAJO #

### DOCKER ###

Empieza instalando `docker`. Si usas linux seguramente ya sabes como hacerlo, y si usas windows instala `docker-desktop`, desde este enlace: [https://www.docker.com/products/docker-desktop/]

La herramienta `acpp` depende de que ya tengas `docker` funcionando en tu PC o Laptop.

### ÁREA DE TRABAJO PARA ACPP ###

Hay una colección creciente de problemas (desafíos) que iremos publicando. Para acceder a esta colección hay dos formas.

1. Si sabes git, y lo tienes instalado, lo mas recomandable es hacer un clone de [https://github.com/neuroactivos/acpp-workspace.git]
   Una vez tengas la copia de trabajo puedes actualizarla de vez en cuando con `git pull`

2. En otro caso descarga el archivo de fuentes accesible tocando el enlace `Source code zip` que puedes encontrar también aquí: [https://github.com/neuroactivos/acpp-workspace/releases/latest]
   Una vez tengas descargado el archivo, descompáctalo en algún lugar del PC, quizás en `D:\Trabajo`, donde verás una carpeta con nombre simnilar a este: `acpp-workspace-20240314.0` y que dependerá de la versión del área de trabajo que hayas descargado. Recuerda regresar y buscar nuevas versiones cuando se avise para descargarlas y tener más desafíos en los que trabajar.

Dentro de la carpeta descompactada están las carpetas de desafíos. Explora dentro de `collections` y verás algunas. Para prácticas mira dentro de la colección `dummies` y luego explora dentro de `pratice`.

### INSTALACIÓN DE ACPP ###

La herramienta `acpp` se utiliza para construir y probar tu programa. 

Ve a esta página [https://github.com/neuroactivos/acpp-workspace/releases/latest] cada vez que quieras instalar una versión más reciente de la misma y descarga desde ahi el instalador de windows, `acpp.windows.installer.x86_64.exe`. Ejecútalo una vez descargado. Este instalador va a instalar una aplicación ejecutable y la colocará en tu `PATH`, para que aparezca si la utilizas desde la línea de comandos. Si usas linux/mac o quieres tener más control, descarga el binario que corresponde a tu tipo de sistema y colócalo en un camino que permita que al ejecutar `acpp` aparezca el comando. 

Comprueba que puedes ejecutar la herramienta antes de continuar, ejecutando `acpp -version`, pero puedes ir descargando otras componentes necesarias.

### VS CODE ###

Aunque no es indispensable, si es muy conveniente que trabajes desde `VS Code` si eres un principiante. Sobre todo si le agregas luego una extensión (un plugin) para trabajar con `acpp`, como explicamos más abajo.

Descarga e instala `VS Code` desde esta página: [https://code.visualstudio.com/download] 

Luego búscalo en el menu de aplicaciones y ejecútalo.

Toca ahora instalarle algunas extensiones para trabajar con C++ y la extensión ACPP.

Para instalarle a `VS Code` una extensión desde internet debes buscar, en los iconos que se alínean a la izquierda en forma vertical, uno que se llama `Extensions`. Cuando des click en él, verás encima un área donde escribir para buscar. Entra este texto para buscar la extensión necesaria y que se llama: `C/C++ Extension Pack` (que es de `Microsoft`). Cuando aparezca presiona el botón de instalación.

Si prefieres otro entorno de desarrollo, puedes usar `acpp` desde la línea de comandos.

### EXTENSIÓN ACPP PARA VS CODE ###

Para instalar la extensión `acpp` lo vamos a hacer diferente porque no está publicada con el resto de las extensiones en internet. 

Primeramente descargaremos un archivo que contiene la extensión. Desde esta página: [https://github.com/neuroactivos/acpp-workspace/releases/latest], busca el archivo que se llama `acpp.vsix` y guárdalo localmente.

Ahora en `VS Code` volvemos a entrar por el ícono de extensiones que hay en la columna izquierda, pero en vez de escribir para buscar, hay que presionar los tres puntos (`...`) que hay encima y a la derecha de esa área donde escribirías. Tras presionar esos puntos, se abre un menú, del cual hay que seleccionar la opción `Install from VSIX...`. Tras seleccionarla se abre un diálodo de selección de archivo. Úsalo para buscar y seleccionar el archivo `acpp.vsix` que recién descargastes a tu máquina. Eso instalará la extensión dentro de VS Code. Notarás que aparece un nuevo ícono en la barra vertical de la izquierda (similar a dos triángulos superpuestos). 

Cuando abras carpetas de desafíos con `VS Code`notarás que en esa área que se abre cuando presionas el ícono de `ACPP`, aparecerán los casos de prueba que hay en `inputs/`. Podrás dar doble click para ejecutarlos o abvrir un menú contextual con el botón derecho del mouse.

### IMAGEN BASE PARA DOCKER ###

Este paso, el último, es un poco incómodo en este momento. Hay que descargar una imagen docker algo grande.

Primero ejecuta esto para confirmar la versión que debes descargar:

  ```
  acpp -version
  ```

Anota el identificador de la versión tal cual aparece en la salida del comando anterior, y ahora ejecuta este otro comando para descargar e importar la imagen a docker. Recuerda colocar el la versión en donde dice **VERSION**

  ```	
	docker pull ghcr.io/neuroactivos/acpp:VERSION
  ```

Ambos comandos se ejecutan desde una linea de comandos.

Como alternativa, una vez sabes el identificador de versión, si tienes acceso a una imagen descargada previamente en una memoria, puedes hacer algo así:

En windows, asumiendo que el identificador de versión es `v20240314`:

 ```
 docker -i F:\acpp.v20240314.tar
 ```

En linux, o macOS, asumiendo el mismo identificador:

 ```
 docker load <acpp.v20240314.tar
 ```

### VERIFICACIONES ###

- En windows usa `docker-desktop` para explorar y ver si ves la imagen ya cargada dentro.

- En linux o mac, sin docker-desktop, puedes ejecutar `docker images` y ver si la ves listada.

- Comprueba que puedes ejecutar `acpp -version` desde la línea de comandos (símbolo del sistema en windows)

- Abre `VS Code` y desde el menú, `File -> Open Folder...` busca una carpeta de algún desafío y selecciónala.
  Ahora ve al ícono `Explorer` que hay en la columna de la izquierda que hemos estado usando, y una vez seleccionada, busca `program.cpp` y ábrelo para editarlo.
  Una plantilla de programa se va a mostrar y la vista de la extensión ACPP (que puedes abrir directamente con el ícono de la columna izquierda) se va a mostrar 
  también con los casos de ejemplo.

Si has llegado hasta aquí puedes pasar a resolver tu primer desafío ACPP desde `VS Code`. Recuerda leer los documentos de esa carpeta antes.

Por favor contacta por el canal de Telegram si necesitas más ayuda.

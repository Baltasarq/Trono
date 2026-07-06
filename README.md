
# El Trono de Inglaterra

## Intro

El Rey Uther, terror de los Sajones, se encuentra aquejado de un terrible mal.
El Rey os manda llamar a ti, Ulfius, uno de los más aguerridos caballeros
del Rey, para realizar una importante misión ...
Una misión que cambiará la forma de entender tu vida.

![Castillo](publish/castillo.jpg)

## Instrucciones para jugar

Sólo es necesario tener un intérprete de máquina Z, como por ejemplo [WinFrotz](https://davidkinder.co.uk/frotz.html) o [Gargoyle](https://ccxvii.net/gargoyle/), para jugar esta aventura. Si se desea jugar online, se puede utilizar [Parchment](https://iplayif.com/).

Es necesario ejecutar el intérprete y después abrir el fichero `trono.z5`
proporcionado. Normalmente, se puede dar el nombre del juego en el momento de ejecutar el intérprete, como por ejemplo:

    $ gargoyle trono.z5

## Jugar online

[Jugar a El Trono de Inglaterra](https://github.com/Baltasarq/Trono/raw/refs/heads/main/dist/trono.z5.html), ¡ahora!

## Agradecimientos

Para la realización de esta aventura se ha empleado la fantástica herramienta
JIF, de Alessando Schilachi, con la colaboración de Mapache en la parte
española.

Ésta aventura no sería la misma sin mis betatesters, Jenesis y Yokiyoki. Debo
agradecer especialmente el esfuerzo, cariño y detalle que ha tenido con esta
aventura. Realmente, gracias a ella, la aventura no es la misma.

## Asuntos legales

Esta aventura participa en la [MedievoComp](https://www.ifwiki.org/MedievoComp), la competición de aventuras
conversacionales ambientadas en el Medievo.

Durante la celebración del concurso, la aventura pertenece al mismo.
Posteriormente, los fuentes serán liberados y la aventura será de dominio
público.

Una vez liberados los fuentes, cualquier aventurero tiene permiso para tomar
aquello que considere útil y emplearlo en su aventura. No sólo se puede hacer,
sino que me gustaría que se hiciera.

## Autores

- Selena: selenavirtual@yahoo.com.ar

- Baltasar: baltasarq@gmail.com

## Construcción

Solo es necesario utilizar el compilador de Inform en su versión 6, para generar el archivo `trono.z5`, que es el ejecutable.

Los fuentes de "El Trono de Inglaterra", se encuentran en el directorio `src/`:

	trono.inf
	tronoCornualles.inf
	personajesTrono.inf

Hay algunas librerías desarrolladas para la ocasión:

	personaje.h
	pensamientos.h

... y otras utilizadas de otros proyectos:

	movilin.h
	responde.h
	array.h

Existe un archivo especial, en `design/`:

	trono_src.txt

Que es el guión que se utilizó para alimentar a txtMap, de manera que éste sacase la primera versión en código informate de El Trono de Inglaterra. Lógicamente después hubo cambios y se pulieron cosas, no se obtiene la aventura final de ahí. Por ejemplo, el pueblo sajón no existe en este guión.

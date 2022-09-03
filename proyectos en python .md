# Triple de pitagórico 
****


## _¿Qué es el triple pitagórico?_

*Tres números enteros a , b , c que satisfacen la ecuación del teorema de Pitágoras ( a 2 + b 2 = c 2 ) son llamados triples Pitagóricos . Unos pocos de los más pequeños son mostrados en la tabla siguiente. Cada triple Pitagórico corresponde con un triángulo rectángulo cuyas longitudes de lado están en relaciones de números enteros.*
| Triples | Pitagóricos |
| ------ | ------ |
| 3, 4, 5  | 3 2 + 4 2 = 5 |
|  |  9 + 16 = 25


```sh
"""
@authors Keila Ramírez <kramireza10@miumg.gt, Dary Pérez <dperezs14@miumg.edu.gt, Marco de León <mdeleonr49@miumg.edu.gt
@description  triple de pitágoras, que devuelve la fórmula C^2=a^.2+b^.2
@license GPL v3
@date 2022/09/03
"""
a=0
b=a+1
#importamos librería math
import math
print("bienvenid@, ingrese 2 numeros enteros")
#declaramos variables a y b
a =int(input("Ingrese #1: "))
b= int(input("Ingrese #2: "))
#Nos muestra en consola la diferencia de cuadrados del triple pitagórico
print (a**2 - b**2)
#El cateto b estará entre el rango de 1 a 500
for b in range(1,500):
  for c in range(b,500):
    #Nos muestra en consola la suma de cuadrados del triple pitagórico.
    a=math.sqrt(b**2+c**2)
    if a == int(a):
      print(b,c,int(a))
      print("adiós")
      
```
Como podemos observar en este código se usaron Estructuras de Control,(For, If)  y librería matemática para poder realizar operaciones.
***



# JUEGO DENOMINADO AHORCADO 
## _¿Qué es el juego de ahorcado?_
El desafío consiste en programar un juego en terminal de texto, utilizando Python. La idea es practicar lógica y algoritmia utilizando estructuras de control.
El juego del ahorcado en esta ocasión consiste en competir usuario contra computador, ya que no nos muestra la palabra sino que solo los guíones.la posibilidad de que adivine letras hasta completar la palabra. Tiene 4 intentos para arriesgar letras. Por cada letra incorrecta, se resta un intento ,cuando se queda sin intentos, pierde y se muestra en consola un dibujo de ahorcado. Si adivina todas las letras, gana. 

En este código se usaron Estructuras de Control,  clases para realizar procesos.
```sh
"""
@author Keila Ramírez <kramireza10@miumg.gt
@description Juego denominado "El ahorcado",en pantalla solo debe visualizarse _ _ _ _ _ _ _ _  E ir rellenándose a medida que se vaya adivinando el texto que asignamos.
@license GPL v3
@date 2022/09/03
"""
import sys
#utilizamos Las secuencias de escape se pueden utilizar desde cualquier script o programa que envíe información a la consola.  
class style():
   # estos son códigos ANSI, utilizados en python 3, Las secuencias de escape ANSI permiten enviar información de control a la consola para cambiar los atributos del texto representado.
    RED = "\033[31m"
    GREEN = "\033[32m"
    YELLOW = "\033[33m"
    BLUE = "\033[34m"
    MAGENTA = "\033[35m"
#se muestra en consola un mensaje de bienvenida y de qué trata la aplicación 
print(style.BLUE + "¿QUIERES JUGAR?")
print(style.BLUE +"bienvenid@, este es el juego de ahorcado")
print(style.MAGENTA +"por favor ingrese los datos correspondientes")
print(" ")
#declaramos la palabra a adivinar 
texto="star wars"
palabra1="  "
intentos=4

while  intentos > 0:
    error=0
    for letra1 in texto:
        if letra1 in palabra1:
            print(letra1,end="")
        else:
            print("_",end="")
            error+=1
    if error==0:
        input()
        print("  ")
        print(style.RED +"adivinaste :) , dame esos cinco!")
        input()
    
    #declaramos con código ANSI el texto que saldrá 
    letra1=input(style.BLUE + "por favor, dime una letra: ")
    palabra1+=letra1

    if letra1 not in  texto:
        intentos-=1
        print("vas mal :(, te quedan solo ",+intentos," intentos")
    # Cuando ya no tenga intentos se imprime en consola el siguiente dibujo.Utilizando código ANSI. 
    if intentos== 0: 
        print(style.GREEN +"-----")
        print(style.GREEN +"¡   ¡")
        print(style.GREEN +"¡   0")
        print(style.GREEN +"¡  /I\\")
        print(style.GREEN +"¡  / \\")
        print(style.GREEN +"¡")
        print(style.GREEN +"¡¡¡¡¡¡¡¡")
        print(style.MAGENTA +"qué mala suerte :(\nperdiste, la palabra era " + texto)
        print(style.YELLOW +"presiona enter para continuar")
else:
    input()
    print("HASTAAA LA PROXIMAAAA")
    input()
```




###### Ahora bien , tenendo en cuenta los proyectos...
# ¿de qué se encarga una clase? ¿un paquete?
*Las clases proveen una forma de empaquetar datos y funcionalidad juntos. Al crear una nueva clase, se crea un nuevo tipo de objeto, permitiendo crear nuevas instancias de ese tipo. Cada instancia de clase puede tener atributos adjuntos para mantener su estado. Las instancias de clase también pueden tener métodos (definidos por su clase) para modificar su estado.*

# ¿para qué se usa una variable? ¿cuál es el uso esperado de una variable?
*Es un nombre que se refiere a un objeto que reside en la memoria. El objeto puede ser de alguno de los tipos vistos (número o cadena de texto), o alguno de los otros tipos existentes en Python.Cada variable debe tener un nombre único llamado identificador.*

# Aplicar formatos con códigos ANSI

En los sistemas con Linux y Mac se pueden utilizar los códigos de secuencias o códigos de escape del estándar ANSI para cambiar los formatos de las salidas. En el caso de Windows, en la actualidad, los códigos ANSI son soportados a partir de Windows 10 update TH2 (con versiones anteriores de DOS y Windows, dependiendo de la versión, era necesario cargar el controlador ANSI.SYS, ANSI.COM u otro software de terceros en el inicio del sistema).

Un código de formato lo forma el carácter Escape seguido por tres números enteros separados por un punto y coma (;): el primero de estos números (un valor de 0 a 7) establece el estilo del texto (negrita, subrayado, etc); el segundo número (de 30 a 37) fija el color del texto y el último número (de 40 a 47) el color del fondo:

# ¿qué se debería mejorar ... si hubiera tiempo?
*se debe mejorar la estructura y el óptimo funcionamiento.



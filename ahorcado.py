
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

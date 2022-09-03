#Encuentre todos los triples de Pitágoras para lado1, lado2, y la hipotenusa, que no sean mayores de 500.

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

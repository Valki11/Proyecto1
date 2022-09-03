# Triple de pitagórico 
****


## _¿Qué es el triple pitagórico?_

*Tres números enteros a , b , c que satisfacen la ecuación del teorema de Pitágoras ( a 2 + b 2 = c 2 ) son llamados triples Pitagóricos . Unos pocos de los más pequeños son mostrados en la tabla siguiente. Cada triple Pitagórico corresponde con un triángulo rectángulo cuyas longitudes de lado están en relaciones de números enteros.*
| Triples | Pitagóricos |
| ------ | ------ |
| 6, 8, 10  | 6^2 + 8^2 = 10 2 |
|  |  36 + 64 = 100

En este código se usaron Estructuras de Control, métodos, clases y librerías matemática para poder realizar operaciones.
```sh
#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c, suma, h2;//Variables de inicio  
    float ladoa, ladob, hipoc; 
    
    for (a=b=c=1, suma=0; c<=500; ++c){ 
        
        hipoc=pow(c,2);
        
        while(a<=c){
            ladoa=pow(a,2); //pow función que retorna la base elevada al exponente
            
            while(suma<=hipoc){
                ladob=pow(b,2);
                suma=ladoa+ladob; //la suma de los lados
                ++b;
                if(suma==hipoc){
                    ladoa=sqrt(ladoa); //sqrt función que devuelve la raíz cuadrada de un valor numérico 
                    ladob=sqrt(ladob);
                    hipoc=sqrt(hipoc);
                    cout << "Lado a: " << ladoa << "    Lado b: " << ladob << "    Hipotenusa: " << hipoc << "\n";
                }
                break; 
            }
            
            ++a;
            b=h2=1;
            ladoa=pow(a,2);
            ladob=pow(b,2);
            suma=ladoa+ladob;
           
        }
        
        a=1;
        suma=0;
    }

    return 0; //finalización del programa 
}

```

***



# JUEGO DENOMINADO AHORCADO 
## _¿Qué es el juego de ahorcado?_
El desafío consiste en programar un juego en terminal de texto, utilizando C++. La idea es practicar lógica y algoritmia utilizando estructuras de control, arreglos y secuencias.
El juego del ahorcado en esta ocasión consiste en ingresar una palabra y darle al usuario la posibilidad de que adivine letras hasta completar la palabra. Tiene 5 intentos para arriesgar letras. Por cada letra incorrecta, se resta un intentoy por consecuencia se va mostrando un dibujo con las partes que va adquiriendo, cuando se queda sin intentos, pierde. Si adivina todas las letras, gana. 
```sh
#include<iostream>
#define ARREGLO_MAX 100
using namespace std;
int main() {
	int a;
	float c;
	int error;
	string letra;
	int n;
	string palabra;
	string vector1[ARREGLO_MAX];
	string vector2[ARREGLO_MAX];
	int x;
	cout << "ingresa la palabra que quieres adivinar" << endl;
	cin >> palabra;
	n = palabra.size();
	for (x=1;x<=n;x++) {
		vector1[x-1] = palabra.substr(x-1,x-x+1);
		// /para que se muestren las rayitas del número de letras 
		vector2[x-1] = "_";
	}
	a = 0;
	// /solo 5 oportunidades 
	while (a<5) {
		for (x=1;x<=n;x++) {
			cout << vector2[x-1];
		}
		cout << "\n Ingrese una letra" << endl;
		cin >> letra;
		error = 1;
		for (x=1;x<=n;x++) {
			if (letra==vector1[x-1]) {
				if (vector2[x-1]=="_") {
					// / se almacenarán las letras en el vector2
					vector2[x-1] = letra;
					c = c+1;
					error = 0;
				}
			}
		}
		// /cuando el vector2 este lleno quiere decir que se ha adivinado la palabra
		if (c==n) {
			cout << "¡te salvaste!" << endl;
			cout << "eres el ganador" << endl;
			a = 6;
			// / si no se adivina quiere decir que aun no acaba el juego, a menos que acaben sus vidas 
		} else {
			if (error==1) {
				a = a+1;
			}
			if (a==1) {
				cout << "|" << endl;
				cout << "|" << endl;
				cout << "|" << endl;
				cout << "|" << endl;
				cout << "\nTe quedan 4 vidas" << endl;
			}
			if (a==2) {
				cout << "--------+" << endl;
				cout << "|       |  " << endl;
				cout << "|       O" << endl;
				cout << "|" << endl;
				cout << "\nTe quedan 3 vidas" << endl;
			}
			if (a==3) {
				cout << "--------+" << endl;
				cout << "|     (^o^)" << endl;
				cout << "|" << endl;
				cout << "|" << endl;
				cout << "\nTe quedan 2 vidas" << endl;
			}
			if (a==4) {
				cout << "--------+" << endl;
				cout << "|     (^o^)" << endl;
				cout << "|     ( > )> \ " << endl;
				cout << "|" << endl;
				cout << "\nTe queda 1 vida" << endl;
			}
			if (a==5) {
				cout << "--------+" << endl;
				cout << "|     (*o*)" << endl;
				cout << "|     (   ) " << endl;
				cout << "|      Y Y " << endl;
				cout << "\nTe ahorcaste :( " << endl;
				cout << "\nGAME OVER" << endl;
			}
		}
	}
	return 0;
```




###### Ahora bien , tenendo en cuenta los proyectos...
# ¿de qué se encarga una clase? 
*Permiten representar un conjunto de datos y especificar las operaciones o procedimientos que permiten manipular tales datos,donde cada programador define los miembros que va a tener su tipo de dato.Los tipos de dato nativos de C++ son en realidad clases.*

# ¿de qué se encarga un paquete?
*Ofrece una sentencia para poder agrupar clases relacionadas.Los nombres de los paquetes son jerárquicos, y están separados por puntos. Lo habitual es escribirlo en minúscula, pero depende de cada lenguaje de programación (en C# se usa la primera letra en mayúscula).*

# ¿qué hace un método? ¿cuál es el uso esperado de un método?
*Los métodos y las funciones son funcionalmente idénticos, pero su diferencia radica en el contexto en el que existen. Un método también puede recibir valores, efectuar operaciones con estos y retornar valores, sin embargo en método está asociado a un objeto, básicamente un método es una función que pertenece a un objeto o clase, mientras que una función existe por sí sola, sin necesidad de un objeto para ser usada.*
# ¿para qué se usa una variable? ¿cuál es el uso esperado de una variable?
*Las variables son posiciones en memoria donde estarán guardados los diferentes valores que le damos o que toman durante ejecución los datos que usamos y normalmente estarán disponibles a lo largo de la ejecución de nuestro programa. Para asignar valores a una variable en una gran variedad de lenguajes que incluye a C++ se usa el operador "=" seguido del valor que le daremos a la variable (no todos usan el "=" para esto). Veamos un ejemplo completo con todos los posibles usos que le damos a una variable.*

```sh
#include <iostream>
using namespace std;

int main()
{
    char x = 'a'; // Declaramos y asignamos en la misma línea

    int num; //Declaramos el entero en una línea
    num = 5; //Le asignamos un valor en otra línea

    int num2 = 8; //Asignacion y declaracion al tiempo

    float numero; //Un numero decimal
    numero = 3.5; //Le asignamos un valor al decimal

    float res = numero + num2; //Sumamos dos variables y las asignamos a res
    //3.5 + 8 = 11.5

    res = res + num; //Al valor actual de res le sumamos el valor de num
    //11.5 + 5 = 16.5

    bool valor = false; //Variable booleana
    valor = true; // Pueden ser true o false

    res = res*2; //Duplicamos el valor de res 16.5*2 = 33

    cout << res << endl; //Mostramos el valor de res por pantalla

    return 0;
}
```
# ¿qué se debería mejorar ... si hubiera tiempo?
*se debe mejorar la estructura y el seguimiento de instrucciones , así como también el óptimo funcionamiento.



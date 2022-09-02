@author: Marco de León
//Programa triple de pitagoras_establece que la suma de los cuadrados de dos lados es igual al cuadrado de la hipotenusa
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

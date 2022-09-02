/**
 * @file  ahorcado.cpp
 * @author Dary Pérez(dperezs14@miumg.edu.gt)
 * @brief 
 * @version 0.1
 * @date 2022-08-29
 * @copyright GPL v3
 */

// /programa del juego ahorcado - adivinar una palabra por letras 
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

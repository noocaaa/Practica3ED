/**
 * @file usopilas_max.cpp
 * @brief Main para probar el uso de Pila_max
 * @authors Profesores de prácticas de ED. 
 */

#include <iostream>
#include "../include/Pila_max.h"

using namespace std;

int main(){
	Pila_max p;
	int i;

	for(i = 10; i>=0; i--){
		p.poner(i);
	}

	cout << endl << "Puestos los elementos" << endl << endl;

	//Mostramos la pila empezando por el tope (es decir, el ultimo valor en entrar debido a que es una estructura LIFO)

	while(!p.vacia()){
		elemento x = p.tope();
		cout << x << endl;
		p.quitar();
	}

	return 0;
}

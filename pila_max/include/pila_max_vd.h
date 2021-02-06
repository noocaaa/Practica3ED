/**
 * @file pila_max_vd.h
 * @class Pila_max
 * @authors Irene Muñoz Domingo & Noelia Carrasco Vilar
 */

#ifndef _PILA_MAX_VD
#define _PILA_MAX_VD
#include <vector>
#include <iostream>
#include <limits>

using namespace std;

/**
 * @brief Struct elemento que contiene el elemento y el máximo de los elementos introducidos.
 */
struct elemento{
	int ele;
	int maximo;
};

/**
 * @brief operador de flujo de salida
 * @param os, el flujo
 * @param ele, el elemento que se pasara al flujo de salida
 * @return devuelve el flujo os
 */
ostream& operator<<(ostream &os, const elemento &ele);

class Pila_max{
	private:
		vector<elemento> datos;
	public:
		//NO HAY MEMORIA DINAMICA --> NO CONSTRUCTORES / DESTRUCTOR

		/**
		 * @brief método para obtener el tope de la pila
		 * @return nos devuelve un elemento, que es el tope
		 */
		elemento tope();

		/**
		 * @brief método para quita el primer elemento de la pila
		 */
		void quitar();

		/**
		 * @brief método para pone un elemento al final de la pila
		 * @param x, el elemento que se añadira al final de la pila
		 */
		void poner(int x);

		/**
		 * @brief método que nos indica si la pila esta vacia o no
		 * @return devuelve true si la pila no tiene ningun elemento, o false si tiene almenos un elemento.
		 */
		bool vacia() const;

		/**
		 * @brief funcion para consultar el tamaño de la pila
		 * @return devuelve un entero que es el tamaño de la pila
		 */
		int size() const;
};


#endif

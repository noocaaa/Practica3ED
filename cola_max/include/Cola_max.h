/**
  * @file Cola_max.h
  * @brief Fichero cabecera del TDA Cola
  * @authors Irene Muñoz Domingo & Noelia Carrasco Vilar
  */

#ifndef __Cola_H__
#define __Cola_H__

#include <cassert>
#include<stack>

using namespace std;

/**
 * @brief Struct elemento que contiene el elemento y el máximo de los elementos introducidos.
 */
struct elemento{
    int ele;
    int maximo;
};

/**
 * @class Cola_max
 * @brief Implementación de una cola doble a partir de una pila.
 */

class Cola_max{
	
	private:
		stack <elemento> datos;
   	
	public:

		/**
		 * @brief método para obtener el tope de la pila
		 * @return nos devuelve un elemento, que es el tope
		 */	
		elemento tope();

		/**
		 * @brief método que nos indica si la pila esta vacia o no
		 * @return devuelve true si la pila no tiene ningun elemento, o false si tiene almenos un elemento.
		 */
		bool vacia() const;

		/**
		 * @brief funcion para consultar el tamaño de la pila
		 * @return devuelve un entero que es el tamaño de la pila
		 */
		int size() const ;

		/**
		 * @brief método para pone un elemento al final de la pila
		 * @param x, el elemento que se añadira al final de la pila
		 */
		void poner (int v);

		/**
		 * @brief método para quita el primer elemento de la pila
		 */
		void quitar();
};

/**
 * @brief operador de flujo de salida
 * @param os, el flujo
 * @param e, el elemento que se pasara al flujo de salida
 * @return devuelve el flujo os
 */
ostream & operator<<(ostream & os, const elemento & e);

#include "../src/Cola_max.cpp"

#endif // __Cola_H__

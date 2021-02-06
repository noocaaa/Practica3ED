/**
  * @file Cola_max.h
  * @brief Fichero con la implementación de los metodos de Cola_max.h
  * @authors Irene Muñoz Domingo & Noelia Carrasco Vilar
  */

#include <cassert>
#include <limits>

/* _________________________________________________________________________ */

elemento Cola_max::tope() {

	stack <elemento> aux;
	elemento v;

	while (!datos.empty()) {
		v = datos.top();
		aux.push(v);
		datos.pop();
	}

	while (!aux.empty()) {
		elemento s = aux.top();
		datos.push(s);
		aux.pop();
	}

	return v;
}

/* ___________________________________________________________z______________ */

bool Cola_max::vacia() const {
	return datos.empty();
}

/* _________________________________________________________________________ */

int Cola_max::size() const {
	return datos.size();
}

/* _________________________________________________________________________ */

void Cola_max::poner (int v) {
	elemento a;
	elemento top = tope();	
	a.ele = v;

	if (top.maximo < v) {
		a.maximo = v;
	} else {
		a.maximo = top.maximo;
	}
	datos.push(a);
}

/* _________________________________________________________________________ */

void Cola_max::quitar() {
	stack<elemento> aux;
	elemento v;

	while (!datos.empty()) {
		v = datos.top();
		aux.push(v);
		datos.pop();
	}

	aux.pop();

	while (!aux.empty()) {
		elemento s = aux.top();
		datos.push(s);
		aux.pop();
	}
}

/* _________________________________________________________________________ */

ostream & operator<<(ostream & os, const elemento & e){
    os << "\n" << e.ele << " " << e.maximo << endl;
    return os;
}

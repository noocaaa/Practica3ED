/**
 * @file pila_max_cola.cpp
 * @class Pila_max
 * @authors Irene Muñoz Domingo & Noelia Carrasco Vilar
 */

elemento Pila_max::tope(){
	elemento res={0,numeric_limits<int>::min()};
	Cola<elemento> aux;

    	if (datos.vacia()) 
		return res;

	while(datos.num_elementos() > 1){
		aux.poner(datos.frente());
		datos.quitar();
	}

	aux.poner(datos.frente());
	res = datos.frente();
	datos = aux;

	return res;
}

void Pila_max::quitar(){
	Cola<elemento> aux;
	int tam = datos.num_elementos();

	for(int i = 0; i < tam-1; i++){
		aux.poner(datos.frente());
		datos.quitar();
	}

	datos = aux;
}

void Pila_max::poner(int x){
	elemento nuevo;
	elemento ultimo = tope();

	nuevo.ele = x;

	if(ultimo.maximo < x)
		nuevo.maximo = x;
	else
		nuevo.maximo = ultimo.maximo;

	datos.poner(nuevo);
}

bool Pila_max::vacia() const{
	return datos.vacia();
}

int Pila_max::size() const{
	return datos.num_elementos();
}

ostream & operator<<(ostream &os, const elemento &e){
	os << e.ele<< " " << e.maximo;
    return os;
}


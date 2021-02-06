/**
 * @file pila_max_vd.cpp
 * @class Pila_max
 * @authors Irene Muñoz Domingo & Noelia Carrasco Vilar
 */

elemento Pila_max::tope(){
	//dos formas:
	//return datos.back();
	elemento res={0,numeric_limits<int>::min()};

	if (!vacia())
		return datos[datos.size()-1]; 
	else
		return res;
	//aqui tienes el maximo hasta el momento (ademas del elemento en si)
}

void Pila_max::quitar(){
	//quitar el elemento TOPE
	datos.pop_back();
	//otra opcion con ITERADORES: datos.erase(datos.end - 1) --> el end es el limite, fuera del contenedor
}


void Pila_max::poner(int x){
	elemento nuevo;
	elemento ultimo = tope();
	nuevo.ele = x; 

	if(ultimo.maximo < x)
		nuevo.maximo = x;
	else
		nuevo.maximo = ultimo.maximo;

	datos.push_back(nuevo);
}

bool Pila_max::vacia() const{
	if(datos.size() == 0){
		return true;
	}
	return false;
}

int Pila_max::size() const{
	return datos.size();
}


ostream & operator<<(ostream &os, const elemento &e){
	os << e.ele << " " << e.maximo;
   	return os;
}


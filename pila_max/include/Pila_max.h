/**
 * @file Pila_max.h
 * @brief determina con que tipo de pila queremos que se compile el main (usopilas..)
 * @authors Irene Muñoz Domingo & Noelia Carrasco Vilar
 */

#define CUAL_COMPILA 2

#if CUAL_COMPILA==1
#include <pila_max_vd.h>
#elif CUAL_COMPILA==2
#include <pila_max_cola.h>
#endif

//INCLUIR EN EL MAIN

/**
Nombre(s): Juan Manuel Vazquez Jimenez
Descripcion: La clase Pila, con atributos y metodos necesarios 
para esta estructura de datos funcione como debe de ser.
*/

#include "Nodo.h"

class Pila
{
public:
	//atributo
	Nodo *Tope;
	//constructores
	Pila();
	Pila(int Dato);
	//metodos
	void Push(int Dato);
	int Pop();
	bool PilaVacia();
	void VaciarPila();
	void Show();
};
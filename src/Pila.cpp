/**
	Nombres(s): Juan Manuel Vázquez Jimenez
*/
#include "Pila.h"

/**
Constructor donde creamos una pila vacia
@params void
@result void
*/
Pila::Pila()
{
	this->Tope = NULL;
}
/**
Constructor donde creamos una pila con un elemento 
@params Dato
@result void
*/
Pila::Pila(int Dato)
{
	Nodo *aux = new Nodo(Dato);
	this->Tope = aux;
}
/**
aregamos un elemento hasta arriba de la pila 
@params Dato
@result void
*/
void Pila::Push(int Dato)
{
	Nodo *aux = new Nodo(Dato,this->Tope);
	this->Tope = aux;
}
/**
eliminamos el elemento tope, guardamos el dato y recorremos el tope 
@params void
@result int
*/
int Pila::Pop()
{
	if(PilaVacia())
	{
		std::cout<<"la pila esta vacia"<<std::endl;
	}
	else
	{
		int x = this->Tope->getDato();
		this->Tope = this->Tope->getSig();
		return x;
	}
}
/**
vemos si la pila esta vacia
@params void
@reult bool
*/
bool Pila::PilaVacia()
{
	if (this->Tope == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

/**
eliminamos todos los elementos de la pila
@params void
@result void
*/
void Pila::VaciarPila()
{ 
	this->Tope = NULL;
}

/**
mostramos todos los elementos de una pila
@params void
@result void
*/
void Pila::Show()
{
	if(PilaVacia())
	{
		std::cout<<"pila  vacia"<<std::endl;
		return;
	}
	Nodo *aux = this->Tope;
	while(aux != NULL)
	{
		std::cout<<aux->getDato()<<std::endl;
		aux = aux->getSig();
	}
}
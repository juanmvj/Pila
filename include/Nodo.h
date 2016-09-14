/**
Nombre(s): Juan Manuel Vazquez Jimenez
Descripcion: La clase Nodo, con atributos y metodos que 
hacen posible el funcionamiento de la clase Nodo, ya que 
sin nodos no hay pila (a menos que este vacia).
*/
#include <iostream>

class Nodo
{
private:
	//atributos
	int Dato;
	Nodo *Sig;
public:
	//metodos
	Nodo(int Dato, Nodo* Sig);
	Nodo(int Dato);
	void setDato(int Dato);
	void setSig(Nodo* Sig);
	int getDato();
	Nodo *getSig();

};
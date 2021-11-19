#ifndef TABLERO_H
#define TABLERO_H
#include "Ficha.h"

//Se crea la clase Tablero.
class Tablero{
private:
	
public:
	Tablero();//Constructor.
	Ficha tablero[3][3];//Arreglo para el tablero.
	void mostrar();
	void ponerFichaEn(int x, int y, char p);
	bool tableroCompleto();
	bool ganador();
};

#endif


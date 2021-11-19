#ifndef JUEGO_H
#define JUEGO_H
#include "Tablero.h"

//Se crea la clase Juego.
class Juego{
private:
	
public:
	Juego(); //Constructor.
	Tablero T; //Se inicializa Tablero.
	void mostrarCabecera();
	void mostrarTablero();
	void mostrarInstrucciones();
	void play();
	void gestionJuego();
};

#endif


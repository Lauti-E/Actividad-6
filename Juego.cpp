#include "Juego.h"
#include "Tablero.h"
#include "Ficha.h"
#include <iostream>
#include <conio.h>

using namespace std;

Juego::Juego(){}

void Juego::play(){ //Método play para juntar todos los demás métodos.
	mostrarCabecera();
	mostrarTablero();
	mostrarInstrucciones();
	Juego J;
	J.gestionJuego();
}

void Juego::mostrarCabecera(){ //Método void para mostrar la cabecera del juego.
	cout<<"Bienvenidos a TATETI!!"<<endl;
	cout<<"El juego es por turnos y el primero que hace TATETI gana!"<<endl;
	cout<<"Si el tablero se completa sin TATETI se considera un empate."<<endl;
	cout<<"Jugador 1: 'X'"<<endl;
	cout<<"Jugador 2: 'O'"<<endl;
	cout<<endl;
}

void Juego::mostrarInstrucciones(){ //Método void para mostrar las instrucciones.
	cout<<endl;
	cout<<"Presiona los botones del 1 al 9 para elegir la posicion."<<endl;
	cout<<endl;
	cout<<"---------------------"<<endl;
	cout<<"Le toca al jugador 1."<<endl;
	cout<<"---------------------"<<endl;
	cout<<"Elige la posicion a colocar la ficha: ";
}

void Juego::mostrarTablero(){ //Método void para mostrar el tablero y agregarlo al main.
	Tablero T;
	T.mostrar();
}


void Juego::gestionJuego(){ //Método void para gestionar el juego.
	
	int contador = 0; //Contador para el turno de los jugadores.
	bool gameOn = false; //Bool para mantener el juego iniciado.
	
	while(gameOn == false){
		int x, y;
		int contadorGanador = 0; //Contador para finalizar el juego al hacer TATETI.
		
		if(kbhit()){ //Funcion para detectar la tecla presionada.
			int tecla = getch();
			switch(tecla){ //Switch con opciones de teclas.
			case 49:
				x = 0;
				y = 0; //1
				break;
			case 50:
				x = 0;
				y = 1; //2
				break;
			case 51:
				x = 0;
				y = 2; //3
				break;
			case 52:
				x = 1;
				y = 0; //4
				break;
			case 53:
				x = 1;
				y = 1; //5
				break;
			case 54:
				x = 1;
				y = 2; //6
				break;
			case 55:
				x = 2;
				y = 0; //7
				break;
			case 56:
				x = 2;
				y = 1; //8
				break;
			case 57:
				x = 2;
				y = 2; //9
				break;
			}
			
			if(contador % 2 == 0){
				if((T.tablero[x][y]).verificar()){ 
					T.ponerFichaEn(x,y,'X'); //Poner ficha en una posición al presionar una tecla.
					contador++;
				}else{
					cout<<endl; //Si ya hay una ficha en esa posición.
					cout<<"Ya hay una ficha en esa posicion, elija otra."<<endl;
				}
			}else if(contador % 2 != 0){
				if((T.tablero[x][y]).verificar()){
					T.ponerFichaEn(x,y,'O'); //Poner ficha en una posición al presionar una tecla.
					contador++;
				}else{
					cout<<endl; //Si ya hay una ficha en esa posición.
					cout<<"Ya hay una ficha en esa posicion, elija otra."<<endl;
				}
			}
			cout<<endl;
			T.mostrar(); //Muestra el tablero con fichas.
			cout<<endl;
			
			//Si hay TATETI termina el juego.
			if(T.ganador()){
				contadorGanador++;
				break;
			}
			
			//Si no hay TATETI, pero el tablero está completo, termina el juego.
			if((T.tableroCompleto()) && contadorGanador == 0){
				cout<<"EL TABLERO FUE COMPLETADO SIN GANADOR!!"<<endl;
				break;
			}
			
			//Turno de los jugadores.
			if((contadorGanador == 0) && (contador % 2 == 0)){
				cout<<"---------------------"<<endl;
				cout<<"Le toca al jugador 1."<<endl;
				cout<<"---------------------"<<endl;
				cout<<"Elige la posicion a colocar la ficha: ";
			}else if((contadorGanador == 0) && (contador %2 != 0)){
				cout<<"---------------------"<<endl;
				cout<<"Le toca al jugador 2."<<endl;
				cout<<"---------------------"<<endl;
				cout<<"Elige la posicion a colocar la ficha: ";
			}
		}
	}
}





















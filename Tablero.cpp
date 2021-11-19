#include "Tablero.h"
#include <iostream>

using namespace std;

Tablero::Tablero(){}

void Tablero::mostrar(){ //Método para mostrar el tablero.
	cout<<"==============="<<endl;
	for(int i = 0;i < 3; i++){
		cout<<" | ";
		for(int j = 0;j < 3; j++){
			cout<<tablero[i][j].getFigura()<<" | ";
		}
		cout<<endl;
		
		if(i < 2){
			cout<<"---------------"<<endl;
		}
	}
	cout<<"==============="<<endl;
}

void Tablero::ponerFichaEn(int x, int y, char p){ //Método para poner la ficha en el tablero.
	tablero[x][y] = p;
}

bool Tablero::ganador(){ //Método para verificar si se hace TATETI con ficha X o O.
	//TA-TE-TI Horizontal.
	if((tablero[0][0].verificarX()) && (tablero[0][1].verificarX()) && (tablero[0][2].verificarX())){
		cout<<endl;
		cout<<"EL GANADOR ES EL JUGADOR 1!!"<<endl;
		return true;
	}
	if((tablero[0][0].verificarO()) && (tablero[0][1].verificarO()) && (tablero[0][2].verificarO())){
		cout<<endl;
		cout<<"EL GANADOR ES EL JUGADOR 2!!"<<endl;
		return true;
	}
	if((tablero[1][0].verificarX()) && (tablero[1][1].verificarX()) && (tablero[1][2].verificarX())){
		cout<<endl;
		cout<<"EL GANADOR ES EL JUGADOR 1!!"<<endl;
		return true;
	}
	if((tablero[1][0].verificarO()) && (tablero[1][1].verificarO()) && (tablero[1][2].verificarO())){
		cout<<endl;
		cout<<"EL GANADOR ES EL JUGADOR 2!!"<<endl;
		return true;
	}
	if((tablero[2][0].verificarX()) && (tablero[2][1].verificarX()) && (tablero[2][2].verificarX())){
		cout<<endl;
		cout<<"EL GANADOR ES EL JUGADOR 1!!"<<endl;
		return true;
	}
	if((tablero[2][0].verificarO()) && (tablero[2][1].verificarO()) && (tablero[2][2].verificarO())){
		cout<<endl;
		cout<<"EL GANADOR ES EL JUGADOR 2!!"<<endl;
		return true;
	}
	//TA-TE-TI Vertical.
	if((tablero[0][0].verificarX()) && (tablero[1][0].verificarX()) && (tablero[2][0].verificarX())){
		cout<<endl;
		cout<<"EL GANADOR ES EL JUGADOR 1!!"<<endl;
		return true;
	}
	if((tablero[0][0].verificarO()) && (tablero[1][0].verificarO()) && (tablero[2][0].verificarO())){
		cout<<endl;
		cout<<"EL GANADOR ES EL JUGADOR 2!!"<<endl;
		return true;
	}
	if((tablero[0][1].verificarX()) && (tablero[1][1].verificarX()) && (tablero[2][1].verificarX())){
		cout<<endl;
		cout<<"EL GANADOR ES EL JUGADOR 1!!"<<endl;
		return true;
	}
	if((tablero[0][1].verificarO()) && (tablero[1][1].verificarO()) && (tablero[2][1].verificarO())){
		cout<<endl;
		cout<<"EL GANADOR ES EL JUGADOR 2!!"<<endl;
		return true;
	}
	if((tablero[0][2].verificarX()) && (tablero[1][2].verificarX()) && (tablero[2][2].verificarX())){
		cout<<endl;
		cout<<"EL GANADOR ES EL JUGADOR 1!!"<<endl;
		return true;
	}
	if((tablero[0][2].verificarO()) && (tablero[1][2].verificarO()) && (tablero[2][2].verificarO())){
		cout<<endl;
		cout<<"EL GANADOR ES EL JUGADOR 2!!"<<endl;
		return true;
	}
	//TA-TE-TI Diagonal.
	if((tablero[0][0].verificarX()) && (tablero[1][1].verificarX()) && (tablero[2][2].verificarX())){
		cout<<endl;
		cout<<"EL GANADOR ES EL JUGADOR 1!!"<<endl;
		return true;
	}
	if((tablero[0][0].verificarO()) && (tablero[1][1].verificarO()) && (tablero[2][2].verificarO())){
		cout<<endl;
		cout<<"EL GANADOR ES EL JUGADOR 2!!"<<endl;
		return true;
	}
	if((tablero[2][0].verificarX()) && (tablero[1][1].verificarX()) && (tablero[0][2].verificarX())){
		cout<<endl;
		cout<<"EL GANADOR ES EL JUGADOR 1!!"<<endl;
		return true;
	}
	if((tablero[2][0].verificarO()) && (tablero[1][1].verificarO()) && (tablero[0][2].verificarO())){
		cout<<endl;
		cout<<"EL GANADOR ES EL JUGADOR 2!!"<<endl;
		return true;
	}
	return false;
}

bool Tablero::tableroCompleto(){ //Método para saber si el tablero está lleno.
	int contador = 0;
	for(int i = 0;i < 3; i++){
		for(int j = 0;j < 3;j++){
			if((tablero[i][j].verificarX()) || (tablero[i][j].verificarO())){
				contador++;
			}
		}
	}
	if(contador == 9){
		return true;
	}
	return false;
}






















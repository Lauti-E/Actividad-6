#include "Ficha.h"

Ficha::Ficha(){ //Constructor para dejar "vacia la ficha".
	figura = ' ';
}

Ficha::Ficha(char p){ //Constructor para igualar p a figura.
	figura = p;
}

void Ficha::setFigura(char _figura){ //Metodo para setear la ficha.
	figura = _figura;
}

char Ficha::getFigura(){ //Get para devolver la figura.
	return figura;
}

bool Ficha::verificar(){ //Se verifica si la ficha es X o O y devuelve un return.
	if((figura != 'X') && (figura != 'O')){
		return true;
	}else{
		return false;
	}
}

bool Ficha::verificarX(){ //Verifica si la ficha es X.
	if(figura == 'X'){
		return true;
	}else{
		return false;
	}
}

bool Ficha::verificarO(){ //Verifica si la ficha es O.
	if(figura == 'O'){
		return true;
	}else{
		return false;
	}
}

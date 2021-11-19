#ifndef FICHA_H
#define FICHA_H

//Se crea la clase Ficha.
class Ficha{
private:
	char figura;
public:
	Ficha();
	Ficha(char p);
	char getFigura();
	void setFigura(char);
	bool verificar();
	bool verificarX();
	bool verificarO();
};

#endif


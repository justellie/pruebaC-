//Declaracion de la clase hora
//Las funciones miembro de estan definidas en hora2.cpp
#include <iostream>
#ifndef HORA2_H
#define HORA2_H


class Hora
{
public:
	Hora(int = 0 , int = 0, int = 0);//constructor predeterminado
	void establecerHora(int, int, int );
	void imprimeMilitar();
	void imprimeEstandar();
private:
	int hora;
	int minuto;
	int segundo;	
	
};//fin de la clase hora 

#endif

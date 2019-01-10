//definiciones de miembro para la clase Hora
#include <iostream>
#include "hora2.h"
using namespace std;




Hora::Hora(int hr, int min , int seg ) //constructor
{establecerHora(hr, min, seg);}

void Hora::establecerHora(int h, int m ,int s)
{
	hora= (h>=0 && h<24)? h:0;//si h es mayor a 0 y menor a 24 entonces su valor es el que retorna, de otra forma sera 0
	minuto=(m>=0 && m<60)? m:0; 
	segundo=(s>=0 && h<60)? s:0;

}

void Hora::imprimeMilitar()
{
	cout<<(hora<10? "0":"")<<hora<<":"
		<<(minuto<10? "0":"")<<minuto<<":"<<endl;
}

void Hora::imprimeEstandar()
{
	cout<<( (hora==0||hora==12)? 12: hora%12)
		<<":"<<(minuto<10?"0":"")<<minuto
		<<":"<<(segundo<10?"0":"")<<segundo
		<<(hora<12?"AM":"PM")<<endl;
}

#include <iostream>

using namespace std;

int cuadradoPorValor(int );
void cuadradoPorReferencia(int &ref );

int main()
{
	int x , z;
	x=2;
	z=4;
	cout<<"el valor de x antes de la funcion es"<< x<<endl;
	cuadradoPorValor(x);
	cout<<"luego el valor de la funcion es "<<x<<endl;
	cout<<"el valor de z antes de la funcion es"<< z<<endl;
	cuadradoPorReferencia(z);
	cout<<"luego el valor de la funcion es "<<z<<endl;


	system("pause");
	return 0;
}

int cuadradoPorValor( int a)
{
	return (a*a);
}

void cuadradoPorReferencia(int &ref)
{
	ref*=ref;
}
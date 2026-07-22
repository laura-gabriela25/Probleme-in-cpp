#include <iostream>
using namespace std;
int main ()
{
	int a, b, aux;
	printf("Ingresa el valor de a: ");
	scanf("%d", &a);
	printf("Ingresa el valor de b: ");
	scanf("%d", &b);
	aux=a; //aux=5
	a=b; //a=3
	b=aux; //b=5
	/*
	a=5
	b=3
	aux=0
	*/
	printf("\nNuevo valor de a: %d", a);
	printf("\nNuevo valor de b: %d", b);
}

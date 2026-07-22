/*Que se genere un numero del 1 al 100, random,
y el usuario tiene que adivinar el numero generado
aleatoriamente, ingresándolo por la entrada estándar.
se debe poner el número de intentos que le tomó
al usuario antes de adivinarlo.
*/
#include <iostream>
#include <time.h> //para srand
#include <stdlib.h> //para 1+rand()%(1-100)
using namespace std;
int main()
{
	int aleatorio, numero, intentos;
	srand(time(NULL)); //para generar un numero aleatorio en cada ejecución
	aleatorio=1+rand()%(1-100); //1 más función rand (random) al 100.
	do
	{
		cout<<"\n";
		cout<<"Adivina el numero: ";
		cin>>numero;
		if(numero>aleatorio)
		{
			cout<<"El numero debe ser menor.";
		}
		else
		{
			cout<<"El numero debe ser mayor.";
		}
		intentos++;
	}
	while(numero!=aleatorio);
	cout<<"\n\n";
	cout<<"Adivinaste el numero."<<"\n";
	if(intentos==1)
	{
		cout<<"Lo conseguiste a la primera."<<"\n";
	}
	else
	{
		cout<<"Lo intentaste "<<intentos<<" veces."<<"\n";
	}
	return 0;
	system("pause");
}

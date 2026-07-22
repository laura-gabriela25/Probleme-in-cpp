#include <iostream>
using namespace std;
int main()
{
	float saldo_inicial=3000, deposito, retiro, saldo_final=0; //el valor del saldo inicial, en este tipo de codigo, siempre tiene que ser declarado en el mismo codigo.
	int opcion;
	printf("\tCajero automatico");
	printf("\n\n1. Depositar");
	printf("\n2. Retirar");
	printf("\n3. Salir");
	printf("\nElige una opcion: ");
	scanf("%d", &opcion);
	switch(opcion)
	{
		case 1:
			printf("Ingresa la cantidad a depositar: ");
			scanf("%f", &deposito);
			saldo_final=saldo_inicial+deposito;
			printf("Saldo final: %.2f", saldo_final);
			break;
		case 2:
			printf("Ingresa la cantidad a retirar: ");
			scanf("%f", &retiro);
			if(retiro>saldo_inicial)
			{
				printf("\nSaldo insuficiente");
			}
			else
			{
				printf("\nRetiro exitoso");
				saldo_final=saldo_inicial-retiro;
				printf("\n\nNuevo saldo disponible: %.2f", saldo_final);
			}
			break;
		case 3:
			break;
		default:
			printf("\nOpcion no valida.");
			break;
	}
}

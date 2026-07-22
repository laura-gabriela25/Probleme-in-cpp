//suma, resta, multiplicacion y division
/*
1. declarar variables con "int" y las operaciones requeridas igualas a 0.
*/
#include <iostream>
using namespace std;
main()
{
	int n1, n2, suma=0, resta=0, multiplicacion=0, division=0;
	printf("Ingresa un numero ");
	scanf("%d", &n1);
	printf("Ingresa otro numero ");
	scanf("%d", &n2);
	suma = n1 + n2;
	resta = n1 - n2;
	multiplicacion = n1 * n2;
	division = n1 / n2;
	printf("\nEl resultado de la suma es: %d", suma);
	printf("\nEl resultado de la resta es: %d", resta);
	printf("\nEl resultado de la multiplicacion es : %d", multiplicacion);
	printf("\nEl resultado de la division es: %d", division);
	
	
}

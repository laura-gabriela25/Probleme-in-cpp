#include <iostream>
using namespace std;
int main()
{
	char caracter;
	printf("Ingresa una letra: ");
	scanf("%c", &caracter);
	switch(caracter)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("Es una vocal minuscula.");
			break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			printf("Es una vocal mayuscula.");
			break;
		default:
			printf("La letra ingresada no es una vocal");
			break;
	}
}

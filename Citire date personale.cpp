/*
Un programa que lea los datos de una persona (nombre, edad, altura)
*/
#include <iostream>
using namespace std;
int main ()
{
	char n[100];
	int e;
	float a;
	cout<<"Ingresa tu nombre: ";
	cin>>n;
	cout<<"Ingresa tu edad: ";
	cin>>e;
	cout<<"Ingresa tu altura: ";
	cin>>a;
	cout<<"Nombre: "<<n<<"\n";
	cout<<"Edad: "<<e<<"\n";
	cout<<"Altura: "<<a<<"\n";
}

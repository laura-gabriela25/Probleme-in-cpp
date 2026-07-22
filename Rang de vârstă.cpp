#include <iostream>
using namespace std;
int main ()
{
	int e; 
	cout<<"Ingresa la edad: ";
	cin>>e;
	if((e>=20)&&(e<=30))
	{
		cout<<"La edad se encuentra en el rango establecido.";
	}
	else
	{
		cout<<"La edad se encuentra fuera del rango establecido.";
	}
}

#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	float a, b, c, h;
	cout<<"Introduce el valor del primer cateto: ";
	cin>>a;
	cout<<"Introduce el valor del segundo cateto: "; 
	cin>>b;
	c=(pow(a, 2))+(pow(b, 2));//c=a*a+b*b;
	h=(sqrt(c));
	cout<<"La hipotenusa del triangulo es: "<<h;
}

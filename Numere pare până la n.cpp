#include <iostream>
using namespace std;
int main()
{
	int n, p=0;
	do
	{
		cout<<"Introduce un numero: ";
		cin>>n;
		if((n%2==0)&&(n!=0))
		p=p+1;
	}
	while(n!=0);
	if(p==0)
	{
		cout<<"No hay numeros pares."<<"\n";
	}
	else
	{
		if(p==1)
		{
			cout<<"Hay 1 numero par."<<"\n";
		}
		else
		{
			cout<<"Hay "<<p<<" numeros pares."<<"\n";
		}
	}
	system ("pause");
}

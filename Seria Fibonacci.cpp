//serie Fibonacci
#include <iostream>
using namespace std;
int main()
{
	int n, numero_uno=1, anterior=0, auxiliar;
	cout<<"Ingresa el numero de elementos : ";
	cin>>n;
	for (int i=0;i<=n;i++)
	{
		printf("%d, ", numero_uno);
		auxiliar=numero_uno; //auxiliar = 1
		numero_uno=numero_uno+anterior; //1+0=1
		anterior=auxiliar; //anterior=1
	}
	return 0;
	system("pause");
}

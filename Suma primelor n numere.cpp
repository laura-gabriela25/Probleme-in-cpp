#include <iostream>
using namespace std;
int main()
{
	int n, s=0;
	cout<<"Introduce un numero: ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		s=s+i;
	}
	cout<<"La suma de los "<<n<<" primeros numeros es "<<s<<"."<<"\n";
	return 0;
	system("pause");
}

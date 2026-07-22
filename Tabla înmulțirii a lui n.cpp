#include <iostream>
using namespace std;
int main()
{
	int n, r;
	cout<<"Introduce numero a multiplicar: ";
	cin>>n;
	for(int i=0;i<=10;i++)
	{
		r=n*i;
		cout<<n<<" * "<<i<<" = "<<r<<"\n";
	}
	return 0;
	system("pause");
}

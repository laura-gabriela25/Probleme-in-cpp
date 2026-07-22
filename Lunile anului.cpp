#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Introduce un numero: ";
	cin>>n;
	switch(n)
	{
		case 1:
			cout<<"El mes correspondiente es enero";
			break;
		case 2:
			cout<<"El mes correspondienre es febrero";
			break;
		case 3:
			cout<<"El mes correspondiente es marzo.";
			break;
		case 4:
			cout<<"El mes correspondiente es abril.";
			break;
		case 5:
			cout<<"El mes correspondiente es mayo";
			break;
		case 6:
			cout<<"El mes correspondiente es junio";
			break;
		case 7:
			cout<<"El mes correspondiente es julio";
			break;
		case 8:
			cout<<"El mes correspondiente es agosto";
			break;
		case 9:
			cout<<"El mes correspondiente es septiembre";
			break;
		case 10:
			cout<<"El mes correspondiente es octubre";
			break;
		case 11:
			cout<<"El mes correspondiente es noviembre";
			break;
		case 12:
			cout<<"El mes correspondiente es diciembre";
			break;
		default:
			cout<<"Al numero introducido no le corresponde ningun mes.";
			break;
	}
}

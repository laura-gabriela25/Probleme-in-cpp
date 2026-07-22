//I=1 V=5 X=10 L=50 C=100 D=500 M=1000
#include <iostream>
using namespace std;
int main()
{
	int n, u=0, d=0, c=0, m=0;
	cout<<"Ingresa un numero: ";
	cin>>n;
	//por ejemplo, 3678=3000+600+70+8
	u=n%10; //367.8, con resto 8
	n=n/10; //el numero quedara como 367
	d=n%10;
	n=n/10;
	c=n%10;
	n=n/10;
	m=n%10;
	switch(m)
	{
		case 1:
			cout<<"M";
			break;
		case 2:
			cout<<"MM";
			break;
		case 3:
			cout<<"MMM";
			break;
		case 4:
			cout<<"IV";
			break;
		case 5:
			cout<<"V";
			break;
		case 6:
			cout<<"VI";
			break;
		case 7:
			cout<<"VII";
			break;
		case 8:
			cout<<"VIII";
			break;
		case 9:
			cout<<"IX";
			break;
	}
	switch(c)
	{
		case 1:
			cout<<"C";
			break;
		case 2:
			cout<<"CC";
			break;
		case 3:
			cout<<"CCC";
			break;
		case 4:
			cout<<"CD";
			break;
		case 5:
			cout<<"D";
			break;
		case 6:
			cout<<"DC";
			break;
		case 7:
			cout<<"DCC";
			break;
		case 8:
			cout<<"DCC";
			break;
		case 9:
			cout<<"CM";
			break;
	}
	switch(d)
	{
		case 1:
			cout<<"X";
			break;
		case 2:
			cout<<"XX";
			break; 
		case 3:
			cout<<"XXX";
			break;
		case 4:
			cout<<"XL";
			break;
		case 5:
			cout<<"L";
			break;
		case 6:
			cout<<"LX";
			break;
		case 7:
			cout<<"LXX";
			break;
		case 8:
			cout<<"LXXX";
			break;
		case 9:
			cout<<"XC";
			break;
	}
	switch(u)
	{
		case 1:
			cout<<"I";
			break;
		case 2:
			cout<<"II";
			break;
		case 3:
			cout<<"III"; 
			break;
		case 4:
			cout<<"IV";
			break;
		case 5:
			cout<<"V";
			break;
		case 6:
			cout<<"VI";
			break;
		case 7:
			cout<<"VII";
			break;
		case 8:
			cout<<"VIII";
			break;
		case 9:
			cout<<"IX";
			break;
	}
}

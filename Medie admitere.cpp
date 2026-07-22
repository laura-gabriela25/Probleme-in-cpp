#include <iostream>
using namespace std;
int main ()
{
	float ro, ma, en, mg, admitere;
	cout<<"Nota la examenul de romana este: ";
	cin>>ro;
	cout<<"Nota la examenul de matematica este: ";
	cin>>ma;
	cout<<"Media din anii de generala este: "<<"\n";
	cin>>mg;
	en=(ro+ma)/2;
	admitere=en*0.80+mg*0.20;
	cout<<"Media de admitere este: "<<admitere<<"\n\n";
	system("pause");
}

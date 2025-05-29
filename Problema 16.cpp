#include <iostream>
using namespace std;

int main(){
	double cre, ca, aum;
	char T;
	cout<<"Ingrese el tipo de su tarjeta(tipo 1, 2, 3, ...): "<<endl;
	cin>> T;
	cout<<"Ingrese el credito de su tarjeta: "<<endl;
	cin>> cre;
	switch (T){
		case '1':
			aum= cre*0.25;
			ca= cre+aum;
			cout<<"Su credito nuevo es de: "<<ca;
			break;
		case '2':
			aum= cre*0.35;
			ca= cre+aum;
			cout<<"Su credito nuevo es de: "<<ca;
			break;
		case '3':
			aum= cre*0.40;
			ca= cre+aum;
			cout<<"Su credito nuevo es de: "<<ca;
			break;
		default:
			aum= cre*0.50;
			ca= cre+aum;
			cout<<"Su credito nuevo es de: "<<ca;
	}
	return 0;
}

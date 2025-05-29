#include <iostream>
using namespace std;

int main(){
	double prom, p, d, t, IGV;
	cout<<"Ingrese su promedio: ";
	cin>> prom;
	cout<<"Ingrese el precio de la pension a pagar: ";
	cin>> p;
	if (prom>=18){
		d= p*0.30;
		t= p-d;
		cout<<"El total a pagar es de: S/"<<t<<".";
	} else{
		IGV= p*0.18;
		t= p+IGV;
		cout<<"El total a pagar es de: S/"<<t<<".";
	}
	return 0;
}

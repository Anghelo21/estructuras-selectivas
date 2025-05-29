#include <iostream>
using namespace std;

int main(){
	int n;
	double p, d, t;
	cout<<"Ingrese la cantidad de camisas que va a comprar: ";
	cin>> n;
	cout<<"Ingrese el precio total de todas sus camisas: ";
	cin>> p;
	if (n>=3){
		d= p*0.20;
		t= p-d;
		cout<<"Usted va a pagar: S/"<<t<<".";
	} else{
		d= p*0.10;
		t= p-d;
		cout<<"Usted va a pagar: S/"<<t<<".";
	}
	return 0;
}

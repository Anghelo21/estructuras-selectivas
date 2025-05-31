#include <iostream>
using namespace std;

int main(){
	double p, r, f;
	cout<<"Ingrese el precio del producto: ";
	cin>> p;
	if (p>1000){
		r= p*0.20;
		f= p-r;
		cout<<"El precio a pagar es de: S/"<<f<<".";
	} else{
		cout<<"El precio a pagar es de: S/"<<p<<".";
	}
	return 0;
}

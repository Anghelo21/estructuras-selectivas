#include <iostream>
using namespace std;

int main(){
	int n;
	double p, d;
	cout<<"Ingrese el precio total de su compra: ";
	cin>> p;
	cout<<"Ahora porfavor, escoja un numero al azar: ";
	cin>> n;
	if (n>=74){
		d= p*0.20;
		cout<<"FELICIDADES, su descuento es de: S/"<<d<<".";
	} else{
		d= p*0.15;
		cout<<"FELICIDADES, su descuento es de: S/"<<d<<".";
	}
	return 0;
}

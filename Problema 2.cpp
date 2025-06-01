#include <iostream>
using namespace std;

int main(){
	double precio, descuento, PrecioFinal;
	cout<<"Ingrese el precio del producto: "<<endl;
	cin>> precio;
	if (precio<0){
		cout<<"El precio ingresado no es valido";
	} else if(precio>1000){
		descuento= precio*0.20;
		PrecioFinal= precio-descuento;
		cout<<"El precio a pagar es de: S/"<<PrecioFinal<<".";
	} else{
		cout<<"El precio a pagar es de: S/"<<precio<<".";
	}
	return 0;
}

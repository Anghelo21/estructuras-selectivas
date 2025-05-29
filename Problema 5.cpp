#include <iostream>
using namespace std;

int main (){
	int e;
	double np;
	char genero;
	cout<<"Ingrese su genero(M:masculino/F:femenino): ";
	cin>> genero;
	cout<<"Ingrese su edad: ";
	cin>> e;
	switch (genero){
		case 'M':
		    np= (210-e)/10;
		    cout<<"Su numero de pulsaciones cada 10 segundos es de: "<<np;
		    break;
	    case 'F':
		    np= (220-e)/10;
		    cout<<"Su numero de pulsaciones cada 10 segundos es de: "<<np;
		    break;
		default:
			cout<<"Porfavor solo elija entre masculino o femenino";
	}
	return 0;
}

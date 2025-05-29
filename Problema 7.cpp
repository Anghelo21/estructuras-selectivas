#include <iostream>
using namespace std;

int main(){
	int l, pu, pt;
	cout<<"Ingrese cuantas llantas va a comprar: ";
	cin>> l;
	if (l<=4){
		pu= 300;
		pt= pu*l;
		cout<<"El precio por cada llanta es de: S/"<<pu<<"."<<endl;
		cout<<"El precio total a pagar es de: S/"<<pt<<".";
	} else if(l<=10){
		pu= 250;
		pt= pu*l;
		cout<<"El precio por cada llanta es de: S/"<<pu<<"."<<endl;
		cout<<"El precio total a pagar es de: S/"<<pt<<".";
	} else{
		pu= 200;
		pt= pu*l;
		cout<<"El precio por cada llanta es de: S/"<<pu<<"."<<endl;
		cout<<"El precio total a pagar es de: S/"<<pt<<".";
	}
	return 0;
}

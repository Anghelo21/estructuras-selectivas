#include <iostream>
using namespace std;

int main(){
	int q, r, s;
	cout<<"Ingrese un primer numero: ";
	cin>> q;
	cout<<"Ahora ingrese dos numeros para saber si el primero es multiplo de estos: ";
	cin>> r;
	cin>> s;
	if (q % r == 0 && q % s == 0){
		cout<<q<<" Si es multiplo de "<<r<<" y "<<s;
	} else{
		cout<<q<<" No es multiplo de "<<r<<" y "<<s;
	}
	return 0;
}

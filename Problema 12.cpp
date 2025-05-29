#include <iostream>
using namespace std;

int main(){
	double x, o1, o2, o3;
	cout<<"Ingrese un valor para x: ";
	cin>> x;
	if (x>8){
		o1= 2*x;
		cout<<"El resultado es: "<<o1;
	} else if (0<x && x<=8){
		o2= x-5;
		cout<<"El resultado es: "<<o2;
	} else{
		o3= x*x;
		cout<<"El resultado es: "<<o3;
	}
	return 0;
}

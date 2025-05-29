#include <iostream>
using namespace std;

int main(){
	double n1, n2, n3;
	cout<<"Porfavor, ingrese 3 numeros"<<endl;
	cin>> n1;
	cin>> n2;
	cin>> n3;
	if (n1>n2&&n1>n3){
		cout<<"El mayor es: "<<n1;
	} else if(n2>n1&&n2>n3){
		cout<<"El mayor es: "<<n2;
	} else{
		cout<<"El mayor es: "<<n3;
	}
	return 0;
}

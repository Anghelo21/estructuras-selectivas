#include <iostream>
using namespace std;

int main(){
	int a;
	cout<<"Ingrese un a�o para verificar si es bisiesto: ";
	cin>> a;
	if (a % 4 == 0&&a % 100 != 0){
		cout<<a<<" Es un a�o bisiesto";
	} else if (a % 400 == 0){
		cout<<a<<" Es un a�o bisiesto";
	} else{
		cout<<a<<" No es un a�o bisiesto";
	}
	return 0;
}

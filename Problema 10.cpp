#include <iostream>
using namespace std;

int main(){
	int a;
	cout<<"Ingrese un año para verificar si es bisiesto: ";
	cin>> a;
	if (a % 4 == 0&&a % 100 != 0){
		cout<<a<<" Es un año bisiesto";
	} else if (a % 400 == 0){
		cout<<a<<" Es un año bisiesto";
	} else{
		cout<<a<<" No es un año bisiesto";
	}
	return 0;
}

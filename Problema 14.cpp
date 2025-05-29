#include <iostream>
using namespace std;

int main(){
	char numero;
	cout<<"Ingrese un numero del 1 al 5: "<<endl;
	cin>> numero;
	switch (numero){
		case '1':
			cout<<"Es la vocal A";
			break;
		case '2':
			cout<<"Es la vocal E";
			break;
		case '3':
			cout<<"Es la vocal I";
			break;
		case '4':
			cout<<"Es la vocal O";
			break;
		case '5':
			cout<<"Es la vocal U";
			break;
	}
	return 0;
}

#include <iostream>
using namespace std;

int main(){
	char num;
	cout<<"Ingrese un mumero del 1 al 7: "<<endl;
	cin>> num;
	switch (num){
		case '1':
			cout<<"Es el dia Domingo";
			break;
		case '2':
			cout<<"Es el dia Lunes";
			break;
		case '3':
			cout<<"Es el dia Martes";
			break;
		case '4':
			cout<<"Es el dia Miercoles";
			break;
		case '5':
			cout<<"Es el dia Jueves";
			break;
		case '6':
			cout<<"Es el dia Viernes";
			break;
		case '7':
			cout<<"Es el dia Sabado";
			break;
	}	
	return 0;
}

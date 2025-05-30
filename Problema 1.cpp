#include <iostream>
using namespace std;

int main(){
	int n1, n2, n3;
	double P;
	cout<<"Ingrese sus 3 notas"<<endl;
	cin>> n1;
	cin>> n2;
	cin>> n3;
	P= (n1+n2+n3)/3;
	if (P>=70){
		cout<<"Usted aprueba";
	} else{
		cout<<"Usted desaprueba";
	}
	return 0;
}

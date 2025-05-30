#include <iostream>
using namespace std;

int main(){
	int n1, n2, n3;
	double P;
	cout<<"Ingrese sus 3 notas"<<endl;
	cin>> n1;
	if (n1<0){
		cout<<"Solo valores positivos";
    } else{
	cin>> n2;
	if (n2<0){
		cout<<"Solo valores positivos";
	} else{	
	cin>> n3;
    if (n3<0){
    	cout<<"Solo valores positivos";
	} else{
	P= (n1+n2+n3)/3;
	if (P>=70){
		cout<<"Usted aprueba";
	} else{
		cout<<"Usted desaprueba";
	}
}
}
}
	return 0;
}

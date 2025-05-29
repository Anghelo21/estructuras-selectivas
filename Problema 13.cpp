#include <iostream>
using namespace std;

int main(){
	int L1, L2, L3;
	cout<<"Ingrese 3 medidas para saber si se puede formar un triangulo: "<<endl;
	cin>> L1;
	cin>> L2;
	cin>> L3;
	if (L1<L2+L3 && L1>L2-L3 && L1>L3-L2 &&
	    L2<L1+L3 && L2>L1-L3 && L1>L3-L1 &&
	    L3<L1+L2 && L3>L2-L1 && L3>L1-L2){
	    cout<<"Si se puede formar un triangulo";
		}else{
			cout<<"No se puede formar un triangulo";
		}
	return 0;
}

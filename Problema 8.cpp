#include <iostream>
using namespace std;

int main(){
	char respuesta;
	cout<<"¿Colon descubrio America?"<<endl;
	cout<<"Porfavor, ingrese la respuesta (S:si/N:no): ";
	cin>> respuesta;
	switch (respuesta){
		case 'N':
		    cout<<"!CORRECTO¡"<<endl;
		    cout<<"Siguiente pregunta: "<<endl;
		    cout<<"¿El lago Titicaca es el lago navegable mas alto del mundo?"<<endl;
	        cout<<"Porfavor, ingrese la respuesta (S:si/N:no): ";
			cin>> respuesta;
			switch (respuesta){
			case 'S':
				cout<<"!CORRECTO¡"<<endl;
		        cout<<"Siguiente pregunta: "<<endl;
		        cout<<"¿El español es el unico idioma oficial de Peru?"<<endl;
	            cout<<"Porfavor, ingrese la respuesta (S:si/N:no): ";
			    cin>> respuesta;
			    switch (respuesta){
			    case 'N':
			    	cout<<"!CORRECTO¡ Ganaste :D"<<endl;
			    	break;
			    case 'S':
				    cout<<"INCONRRECTO, perdiste :(";
					break;	
				}
				break;
		    case 'N':
			    cout<<"INCONRRECTO, perdiste :(";
				break;	
			}
			break;
		case 'S':
			cout<<"INCONRRECTO, perdiste :(";
			break;
	}
	return 0;
}

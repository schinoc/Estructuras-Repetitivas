#include <iostream>
using namespace std;
int main (){
	
	int numero_secreto = 7;
	int numero_ingresado;
	
	do {
		cout<<"Adivine el numero secreto: ";
		cin>>numero_ingresado;
		if (numero_ingresado != numero_secreto){
			cout<<"Intenta de nuevo."<< endl;
		}
	} while (numero_ingresado != numero_secreto);
	cout<<"Felicidades Adivinaste el numero secreto."<<endl;
	return 0;
}

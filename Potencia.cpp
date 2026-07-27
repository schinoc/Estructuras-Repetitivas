#include <iostream>
using namespace std;
int main (){
	
	int base, exponente;
	long resultado = 1;
	
	cout<<"introduce la base: ";
	cin>>base;
	cout<<"introduce el exponente: ";
	cin>>exponente;
	
	for (int i = 1; i <= exponente; i++){
		resultado = resultado * base;
	}
	
	cout<<base<<" elevado a "<<exponente<<" es: "<<resultado<<endl;
	
	return 0;
}

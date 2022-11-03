//primer programa c++

#include<iostream>

using namespace std; //indicamos que usamos el estandar de c++, solo flujo de entrada salida como cout

int main(){
	
	float precio, iva, preciofinal;
	
	cout<<"digite el precio del producto";
	cin>>precio;
	
	iva = precio * 0.21; //iva
	preciofinal = precio+iva;
	
	cout<<"\nEl precio final es: "<<preciofinal<<endl;
	
	
	return 0; 
}

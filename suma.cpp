//primer programa c++

#include<iostream>

using namespace std; //indicamos que usamos el estandar de c++, solo flujo de entrada salida como cout

int main(){
	
	float a,b,c,d, resultado = 0;
	
	cout<<"Digite el valor de A:";
	cin>>a;
	cout<<"digite el valor de B:";
	cin>>b;
	cout<<"digite el valor de C:";
	cin>>c;
	cout<<"digite el valor de D:";
	cin>>d;
	
	resultado = (a+b)/(c+d);
	
	cout<<"\nEl resultado: "<<resultado<<endl;
	
	return 0; 
}

#include <iostream> //libreria para escribir en la consola 
#include <stdlib.h> //libreria para que no se cierre el programa 

int num = 34; //creamos variable llamada NUM que va a valer 34

using namespace std; 


int main ()
{
   cout << num << "\n\n" << endl; //cout << ... << hara que el valor de adentro se muestre en pantalla y \n\n Son los espaciados. Endl hace que termine la funcion COUT
   system ("PAUSE"); //para que no se cierre nuestro programa
   return 0; //nuestra funcion int main retornara un valor de 0	
}

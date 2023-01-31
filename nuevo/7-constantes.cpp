#include <iostream>
#include <conio.h>

using namespace std;

//constante, son como las variables pero no pueden ser modificado a lo largo del programa.
   /*
   ejemplo de variable que se puede cambiar
   
   int num=2; int va a valer 2;
   
   pero a lo largo del programa podemos cambiar su valor por un 12
   
   num = 12;
   cout << num << endl;
   
   
   */
//estas constante sirve para cuando necesitemos una variable o un valor que no cambie.    
   
const int num= 12; //guarda tipo de dato entero, float, double, char y booleanos aunque no es recomendable esta ultima

int main ()
{ 
   
   cout << num << endl;
   getch(); 
   return 0;
}

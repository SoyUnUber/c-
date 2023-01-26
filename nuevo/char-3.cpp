#include <iostream>
#include <stdlib.h> 
	
using namespace std; 

char letra= 'd'; //char variable tipo dato caracter, solo se admite UN SOLO CARACTER, si nosotros tipeamos char letra= 'EJEMPLO'; el compilador tomara el ultimo caracter que escribimos EJEMPL (O)
//si queremos que contenga una cadena de caracteres solamente usamos >>> char* letra= "EJEMPLO";
int main ()
{ 
   cout << letra << "\n\n" << endl;
   system ("PAUSE");
   return 0;
}

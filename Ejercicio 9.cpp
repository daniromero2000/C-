#include <iostream>
#include <math.h>

using namespace std;

int main ()
{  
  float euros, pesos, dolares;
  
  // Esta aplicacion permite convertir a pesos Colombianos y a Dólares un valor dado en Euros

  cout << "Ingrese la cantidad de dinero en Euros: \n";
  cin >> euros; 
  
  pesos = euros  * 4338.98;
  dolares = euros * 1.16;
 
  cout << "\nEl valor en pesos es: CO$" << pesos;
  cout << "\nEl valor en dolares es: $" << dolares;

  return 0;
}

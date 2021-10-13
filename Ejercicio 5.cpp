#include <iostream>
#include <math.h>

using namespace std;

int main ()
{  
  float valor, total;

  // Esta aplicacion permite calcular el valor total de un producto

  cout << "Ingrese el valor: \n";
  cin >> valor; 
  
  total = valor + (valor * 19 / 100);
  cout << "El valor total del producto es: " << total;
 
  return 0;
}

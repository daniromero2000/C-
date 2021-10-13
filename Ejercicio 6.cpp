#include <iostream>
#include <math.h>

using namespace std;

int main ()
{  
  float sueldo, salud, pension, total;
  
  // Esta aplicacion permite calcular el aporte a SALUD, pensión y el neto a pagar
  // que debe pagar un trabajador a partir de su sueldo

  cout << "Ingrese el sueldo: \n";
  cin >> sueldo; 

  salud = sueldo * 0.04;
  pension = sueldo * 0.03375;
  total = sueldo - salud - pension;
  
  cout << "\nEl aporte a salud es: $" << salud;
  cout << "\nEl a pension es: $" << pension;
  cout << "\nEl total a pagar es: $" << total;

  return 0;
}

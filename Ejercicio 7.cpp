#include <iostream>
#include <math.h>

using namespace std;

int main ()
{  
  float valor, horas, total;
  
  // Esta aplicacion permite calcular el valor de horas extras diurnas

  cout << "Ingrese el valor de la hora: \n";
  cin >> valor; 
  
  cout << "Ingrese la cantidad de horas trabajadas: \n";
  cin >> horas; 

  total = ((valor * 0.35) + valor) * horas;
 
  cout << "\nEl valor total de las horas extras diurnas es: $" << total;
 
  return 0;
}

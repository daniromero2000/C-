#include <iostream>
#include <math.h>

using namespace std;

int main ()
{  
  float nota1, nota2, nota3, total;
  
  // Esta aplicacion permite calcular el promedio de un estudiante

  cout << "Ingrese la primera nota: \n";
  cin >> nota1; 
  
  cout << "Ingrese la segunda nota: \n";
  cin >> nota2; 
  
  cout << "Ingrese la tercera nota: \n";
  cin >> nota3; 

  total = (nota1 + nota2 + nota3) / 3;
 
  cout << "\nEl promedio del estudiante es: " << total;
 
  return 0;
}

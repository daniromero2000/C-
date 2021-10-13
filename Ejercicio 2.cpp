#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
  float area, radio;

  //Esta aplicación calculara el área de una circunferencia según el radio dado

  cout << "Ingrese el radio: ";

  cin >> radio; 

  area = pow(radio, 2) * 3.1416;

  cout << " El area es " << area;
  
  return 0;
}

